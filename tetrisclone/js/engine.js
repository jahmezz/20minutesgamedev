var canvas, input, content;

(function() {
  //setup canvas
  canvas = (function() {
    //what is c?
    var c = {},
    //the first canvas element on document
    frame = document.getElementsByTagName("canvas")[0],
    //frame get context 2d. look this up now and define
    //back up to canvasrenderingcontext2d for drawing rectangles, text, images and other objects
    //2d writing surface
    _fctx = frame.getContext("2d"),
    //create canvas tagged element
    view = document.createElement("canvas"),
    //2d writing surface
    ctx = view.getContext("2d"),
    //frame and view size, and scale
    _fw, _fh, _vw, _vh, _scale = 1;

    c.frame = frame;
    c.view = view;
    c.ctx = ctx;

    c.flip = function() {
      //clear frame
      _fctx.clearRect(0, 0, _fw, _fh);
      //draw view onto frame
      _fctx.drawImage(this.view, 0, 0, _fw, _fh);
      //clear view?
      this.ctx.clearRect(0, 0, _vw, _vh);
    }

    //define width for c
    Object.defineProperty(c, "width", {
      set: function(w) {
        this.view.width = w;
        this.scale = _scale;
      },
      get: function() {
        return _vw;
      }
    });
    //define height for c
    Object.defineProperty(c, "height", {
      set: function(h) {
        this.view.height = h;
        this.scale = _scale;
      },
      get: function() {
        return _vh;
      }
    });
    //define scale for c
    Object.defineProperty(c, "scale", {
      set: function(s) {
        _scale = s;
        _vw = this.view.width;
        _vh = this.view.height;
        _fw = this.frame.width = _vw * s;
        _fh = this.frame.height = _vh * s;

        //remove image smoothing for 2d frame context
        _fctx["imageSmoothingEnabled"] = false;
        //set all browsers to false too
        ["o", "ms", "moz", "webkit"].forEach(function(v) {
          _fctx[v + "imageSmoothingEnabled"] = false;
        });
      },
      get: function() {
        return _scale;
      }
    });
    return c;
  })();

  //content loader
  content = (function() {
    var c = {},
      _files = {},
      _filecount = 0,
      _loadcount = 0;

    //get the file named what is passed
    c.get = function(name) {
      return _files[name];
    }

    //progress as a decimal
    c.progress = function() {
      return _loadcount / _filecount;
    }

    //download the image into the game
    c.load = function(name, src) {
      //if src is null, set src to name
      //src is src name
      src = src || name;
      //increment file count
      _filecount++;
      //split by .
      switch (src.split(".").pop()) {
        //for png, gif, and jpg do new Image() to download
        case "png":
        case "gif":
        case "jpg":
          var img = new Image();
          //on load, increment
          img.onload = function() {
            _loadcount++;
          }
          //set name (.src) to src
          img.src = src;
          //set files[name] to our downloaded image
          _files[name] = img;
          break;
        case "ogg":
        case "mp3":
        case "wav":
          break;
        case "json":
        case "tmx":
          break;
      }
    }
    return c;
  })();

  //input handler
  input = (function() {
    var i = {},
    _bindings = {},
    _pressed = {},
    _down = {},
    _released = [],
    mouse = { x: 0, y: 0};

    i.mouse = mouse;

    //button ids
    var Buttons = {
      LEFT: -1,
      MIDDLE: -2,
      RIGHT: -3
    }

    //key ids
    var Keys = {
      SPACE: 32,
      LEFT_ARROW: 37,
      UP_ARROW: 38,
      RIGHT_ARROW: 39,
      DOWN_ARROW: 40
    }

    //set Keys[char] = id
    for(var ch = 65; ch <= 90; ch++) {
      Keys[String.fromCharCode(ch)] = ch;
    }

    //i is our weird parent object... i disagree with this design
    i.Buttons = Buttons;
    i.Keys = Keys;

    //bind key...
    i.bindKey = function(action, keys) {
      //if keys is a number, set binding to action passed
      if (typeof keys == "number") {
        _bindings[keys] = action;
      }
      //for all keys, set bindings to action
      for (var x = 0; x < keys.length; x++) {
        _bindings[keys[x]] = action;
      }
    }
    //take the event and get the keycode/mouse button code from it
    function _getCode(e) {
      var t = e.type;
      //if its keydown/up, get code
      if (t === "keydown" || t === "keyup") {
        return e.keyCode;
        //get buttons from mousedown/up
      } else if (t === "mousedown" || t === "mouseup") {
        switch(e.button) {
          case 0:
            return Buttons.LEFT;
          case 1:
            return Buttons.MIDDLE;
          case 2:
            return Buttons.RIGHT;
        }
      }
    }
    //mouse down or key down
    function ondown(e) {
      var action = _bindings[_getCode(e)];
      //if we pressed a non-functional key, ignore. wtf is this code style?
      if (!action) {
        return;
      } else {
        //pressed[action] = not down action...
        //need to figure out what pressed is...
        _pressed[action] = !_down[action];
        //these variable names are absolute shit
        _down[action] = true;
        //click doesn't actually reach browser event handler
        e.preventDefault();
      }
    }

    function onup(e) {
      var action = _bindings[_getCode(e)];
      if (!action) {
        return;
      } else {
        //place action into released...
        _released.push(action);
        e.preventDefault();
      }
    }

    //context is right click
    function oncontext(e) {
      //if we bound an action to right button, then squelch
      if (_bindings[Buttons.RIGHT]) {
        e.preventDefault();
      }
    }

    //move is updownleftright
    function onmove(e) {
      //event target is el
      var el = e.target,
          ox = 0,
          oy = 0;

      do {
        //if move left, add to ox
        ox += el.offsetLeft;
        //top
        oy += el.offsetTop;
      //???
      } while (el = el.parentOffset);

      //???
      mouse.x = e.clientX - ox;
      mouse.y = e.clientY - oy;
      e.preventDefault();
    }

    //reset down[] to false, pressed to {}, released to []
    i.clearPressed = function() {
      //for all released, set down released to false...
      //does this mean release keys?
      //wow. what a mess.
      for (var i = 0; i < _released.length; i++) {
        _down[_released[i]] = false;
      }
      _pressed = {};
      _released = [];
    }
    //find the pressed of action
    i.pressed = function(action) {
      return _pressed[action];
    }
    //find the down of action
    i.down = function(action) {
      return _down[action];
    }
    //find out of released is in the array...
    i.released = function(action) {
      return _released.indexOf(action) >= 0;
    }
    //frame in charge of mouse events
    canvas.frame.onmousedown = ondown;
    
    canvas.frame.onmouseup = onup;
    canvas.frame.onmousemove = onmove;
    canvas.frame.oncontextmenu = oncontext;

    //entire html document in charge of keyboard events
    document.onkeydown = ondown;
    document.onkeyup = onup;
    document.onmouseup = onup;

    return i;
  })();
})();
