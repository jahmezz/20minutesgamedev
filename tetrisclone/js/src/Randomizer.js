define(function() {
  var Randomizer = Class.extend({
    init: function() {
      //_ids is the letters of our tetraminos
      this._ids = "LITSZOJ".split("");
      //create these variables to separate out s and z
      this._sId = this._ids.indexOf("S");
      this._zId = this._ids.indexOf("Z");
      this.size = this._ids.length;
      //initialize more
      this.initialize();
    },
    initialize: function() {
      this.idx = 0;
      //size is the length of our list of tetraminos
      this.bag = new Array(this.size);

      //fill bag with keys from 0 to size
      for (var i = 0; i < this.size; i++) {
        this.bag[i] = i;
      }

      //shuffle until...
      do {
        this.shuffle();
      //our first piece is not s or z
      } while (this.bag[0] === this._sId || this.bag[0] === this._zId);
    },

    shuffle: function(array) {
      //if array exists, keep it, if not use bag
      //counter is the array's length
      //temp is
      //index is
      var array = array || this.bag,
          counter = array.length,
          temp,
          index;

      //simple shuffle
      //swap random and end, and count down
      //while this counter that started at array's length is > 0
      while (counter > 0) {
        //index is any number from 0 to counter-1
        index = Math.round(Math.random() * --counter);
        //swap the highest number we want to look at in array with a random number from 0-counter
        //set temp to the array[highest number]
        temp = array[counter];
        //set array[highest number] to array[random]
        array[counter] = array[index];
        //set array[random] to array[highest number]
        array[index] = temp;
      }

      return array;
    },

    //get next block in bag
    nextInt: function() {
      //grab piece at index
      var i = this.bag[this.idx];
      this.idx++;
      //if bag is empty
      if (this.idx >= this.size) {
        //reset and shuffle
        this.idx = 0;
        this.shuffle();
      }
      return i;
    },

    //get the definition of our next block
    nextId: function() {
      return this._ids[this.nextInt()];
    }
  });

  return Randomizer;
})