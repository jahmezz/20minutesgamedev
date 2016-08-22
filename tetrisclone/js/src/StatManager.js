define(function() {
  var StatManager = Class.extend({
    init: function() {
      //reset to zero
      this.reset(0);
    },
    reset: function(startlvl) {
      //set counts to nothing
      this.tetraminos = {
        L: 0,
        I: 0,
        T: 0,
        S: 0,
        Z: 0,
        O: 0,
        J: 0,
        tot: 0
      }

      //this is false.
      this._firstlvl = false;

      //possible to set your own start level
      this.startlvl = startlvl || 0;

      //start at start level
      this.lvl = this.startlvl;
      this.score = 0;
      this.lines = 0;
    },

    //increment piece and total totals
    incTetramino: function(id) {
      this.tetraminos[id] += 1;
      this.tetraminos.tot += 1;
    },

    //add score to your score
    addScore: function(cleared) {
      //interesting syntax here
      var p = [0, 40, 100, 300, 1200][cleared];
      //add (level+1)*this thing to score
      this.score += (this.lvl + 1) * p;
    },

    checkLvlUp: function() {
      //if we have first level
      if (this._firstlvl) {
        //if number of lines is greater than (level + 1) * 10, then next level
        if (this.lines >= (this.lvl + 1) * 10) {
          this.lvl++;
        }
      //not first level
      } else {
        //if we have 100 or startlevel + 1 * 10 lines
        if (this.lines >= (this.startlvl + 1) * 10 || 100) {
          //flip on flag... so we never go through this logic again
          this._firstlvl = true;
          this.lvl++;
        }
      }
    }
  });
  return StatManager;
})