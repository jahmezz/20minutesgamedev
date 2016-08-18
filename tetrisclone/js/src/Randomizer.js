define(function() {
  var Randomizer = Class.extend({
    init: function() {
      this._ids = "LITSZOJ".split("");
      this._sId = this._ids.indexOf("S");
      this._zId = this._ids.indexOf("Z");
      this.size = this._ids.length;
      this.initialize();
    },
    initialize: function() {
      this.idx = 0;
      this.bag = new Array(this.size);

      for (var i = 0; i < this.size; i++) {
        this.bag[i] = i;
      }

      do {
        this.shuffle();
      } while (this.bag[0] === this._sId || this.bag[0] === this._zId);
    },
    shuffle: function(array) {
      var array = array || this.bag,
          counter = array.length,
          temp,
          index;

      while (counter > 0) {
        index = Math.round(Math.random() * --counter);
        temp = array[counter];
        array[counter] = array[index];
        array[index] = temp;
      }

      return array;
    },

    nextInt: function() {
      var i = this.bag[this.idx];
      this.idx++;
      if (this.idx >= this.size) {
        this.idx = 0;
        this.shuffle();
      }
      return i;
    },

    nextId: function() {
      return this._ids[this.nextInt()];
    }
  });

  return Randomizer;
})