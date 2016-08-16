define(function() {
  var ShapeDef = {
    L: "001" + "111" + "000",
    I: "0000 1111 0000 0000",
    T: "010 111 000",
    S: "011 110 000",
    Z: "011 110 000",
    O: "011 011 000",
    J: "100 111 000"
  }

  var ids = [];

  for (var sd in ShapeDef) {
    ShapeDef[sd] = ShapeDef[sd].replace(/\s+/g, "");
    ids.push(sd);
  }

  var Tetramino = Class.extend({
    init: function(id, x, y) {
      this._shapes = [];
      this.rotation = 0;
      this.id = id.toUpperCase();

      this.x = x || 0;
      this.y = y || 0;

      var shape = ShapeDef[this.id];

      var s = [],
          n = Math.sqrt(shape.length);

      for (var i = 0; i < n; i++) {
        s[i] = [];
        for (var j = 0; j < n; j++) {
          s[i][j] = parseInt(shape[j*n + i]);
        }
      }
      this._shapes.push(s);

      var r = 3, t;
      //rotate it as long as it is not the O piece and hasn't rotated 3 times
      while (this.id !== "O" && r-- !== 0) {
        t = [];
        for (var i = 0; i < n; i++) {
          t[i] = [];
          for (var j = 0; j < n; j++) {
            t[i][j] = s[n - j - 1][i];
          }
        }
        s = t.slice(0);
        this._shapes.push(s);
      }
    },

    setTo: function(control, id) {
      id = id != null ? id : this.id;
      var shape = this._shapes[this.rotation];

      for (var i = 0; i < shape.length; i++) {
        for (var j = 0; j < shape.length; j++) {
          if (shape[i][j]) {
            control[this.x+i][this.y+j].setType(id);
          }
        }
      }
    },

    check: function(control, dx, dy, dr) {
      dx = dx || 0;
      dy = dy || 0;
      dr = dr ? this.getRotation(dr) : this.rotation;

      var x = this.x + dx,
          y = this.y + dy,
          w = control.length,
          h = control[0].length;
          shape = this._shapes[dr];

      for (var i = 0; i < shape.length; i++) {
        for (var j = 0; j < shape.length; j++) {
          if (shape[i][j]) {
            if (!(0 <= x+i && x+i < w && 0 <= y+j && y+j < h) || control[x+i][y+j].solid) {
              return false;
            } 
          }
        }
      }
      return true;
    },

    getRotation: function(dr) {
      var r = this.rotation,
          l = this._shapes.length;
      if(dr > 0) {
        return (r + 1) % l;
      } else {
        return r - 1 >= 0 ? r - 1 : l - 1;
      }
    },

    toString: function() {
      var str = "";
      for (var i = 0; i < this._shapes.length; i++) {
        str += "\n";
        var s = this._shapes[i];
        for (var j = 0; j < this._shapes[i].length; j++) {
          for (var k = 0; k < this._shapes[i][j].length; k++) {
            str += s[j][k] ? "#" : ".";
          }
          str += "\n";
        }
      }
      return str;
    }
  });

  for (var i = 0; i < ids.length; i++) {
    Tetramino[ids[i]] = ids[i];
  }

  return Tetramino;
});