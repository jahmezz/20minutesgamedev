define(function() {
  //defined shapes
  var ShapeDef = {
    L: "001" + "111" + "000",
    I: "0000 1111 0000 0000",
    T: "010 111 000",
    S: "011 110 000",
    Z: "110 011 000",
    O: "011 011 000",
    J: "100 111 000"
  }

  var ids = [];

  //each shapedef is a string that defines a tetramino shape using 0s and 1s
  for (var sd in ShapeDef) {
    //piecing apart this regex
    //\s means whitespace, + means one or more whitespaces
    ///g global. replace all
    //all together, it means delete ALL whitespaces in the string 
    ShapeDef[sd] = ShapeDef[sd].replace(/\s+/g, "");
    //save to ids
    ids.push(sd);
  }

  var Tetramino = Class.extend({
    init: function(id, x, y) {
      //don't really know what these mean right now
      //okay, so shapes is a a set of 2d arrays. each 2d array is built from a certain shape definition
      //so shapes is an array of shape definitions
      this._shapes = [];
      this.rotation = 0;
      this.id = id.toUpperCase();

      this.x = x || 0;
      this.y = y || 0;

      //what is shapedef? need to find out. FOUND OUT
      var shape = ShapeDef[this.id];

      var s = [],
          //n is the square root of the shape string's length
          //let's examine this for T
          //t.length is 9. n = 3
          //so n here is the length of a row in our definition string
          n = Math.sqrt(shape.length);

      //i need to make these variables more readable at some point
      //rows in a shape def
      for (var i = 0; i < n; i++) {
        s[i] = [];
        //cols in a shape def
        for (var j = 0; j < n; j++) {
          //get shape at col*width + row. wtf?
          //need to return to this later
          s[i][j] = parseInt(shape[j*n + i]);
        }
      }
      //add shape to collection
      this._shapes.push(s);

      var r = 3, t;
      //rotate it as long as it is not the O piece and hasn't rotated 3 times
      while (this.id !== "O" && r-- !== 0) {
        t = [];
        for (var i = 0; i < n; i++) {
          t[i] = [];
          for (var j = 0; j < n; j++) {
            //this t thing is the shape def's row
            t[i][j] = s[n - j - 1][i];
          }
        }
        //phew, hard to reason this
        s = t.slice(0);
        this._shapes.push(s);
      }
    },


    setTo: function(control, id) {
      id = id != null ? id : this.id;
      var shape = this._shapes[this.rotation];

      //rows
      for (var i = 0; i < shape.length; i++) {
        //cols
        for (var j = 0; j < shape.length; j++) {
          //if there is a shape here
          if (shape[i][j]) {
            //set type to id
            control[this.x+i][this.y+j].setType(id);
          }
        }
      }
    },

    //check if the next position of the block is valid
    check: function(control, dx, dy, dr) {
      //changes ("i see no changes, all i see are racist faces")
      dx = dx || 0;
      dy = dy || 0;
      dr = dr ? this.getRotation(dr) : this.rotation;

      //x is where this tetramino is in x + move
      //y ""
      //w is width of screen
      //height is height of screen
      //shape is which shape rotation we grab
      var x = this.x + dx,
          y = this.y + dy,
          w = control.length,
          h = control[0].length;
          shape = this._shapes[dr];

      for (var i = 0; i < shape.length; i++) {
        for (var j = 0; j < shape.length; j++) {
          //if something is there
          if (shape[i][j]) {
            //holy shit
            //0 <= x+i
            //x+i >= 0. x can be -1 if we are trying to go left. we make sure it's not going into wall
            //x+i < w. make sure we don't go off right
            //y+j >= 0. we don't go off bottom
            //y+j < h. we don't go off top
            //control[x+i][y+j] is next position of block. if it is solid, then we can't go there
            if (!(0 <= x+i && x+i < w && 0 <= y+j && y+j < h) || control[x+i][y+j].solid) {
              return false;
            } 
          }
        }
      }
      //valid, we can go there
      return true;
    },

    //get next rotation
    getRotation: function(dr) {
      //r is current rotation of tetramino
      //l is length of shapes bag
      var r = this.rotation,
          l = this._shapes.length;
      //if we are rotating right
      if(dr > 0) {
        //return the next rotation, reset if go off edge
        return (r + 1) % l;
      //if we are rotating left
      } else {
        //if we haven't gone off the left, get the one on the left. else get the last rotation
        return r - 1 >= 0 ? r - 1 : l - 1;
      }
    },

    //write tetramino definition to string
    toString: function() {
      var str = "";

      for (var i = 0; i < this._shapes.length; i++) {
        //add new line
        str += "\n";
        //get next shape in bag
        var s = this._shapes[i];
        for (var j = 0; j < this._shapes[i].length; j++) {
          for (var k = 0; k < this._shapes[i][j].length; k++) {
            //if there is something here, put #
            //if there isn't, put .
            str += s[j][k] ? "#" : ".";
          }
          //add newline
          str += "\n";
        }
      }
      return str;
    }
  });
  
  //build tetramino object where the keys are the string definition of the tetramino
  for (var i = 0; i < ids.length; i++) {
    Tetramino[ids[i]] = ids[i];
  }

  return Tetramino;
});