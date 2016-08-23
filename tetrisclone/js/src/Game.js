define(function() {
  //vendor strings
  var _vendors = ["o", "ms", "moz", "webkit"];
  //move through vendors and if requestanimationframe hasn't been created
  for (var i = _vendors.length; i-- && !window.requestAnimationFrame;) {
    var v = _vendors[i];
    //set requestanimationframe to this certain part of window
    window.requestAnimationFrame = window[v + "RequestAnimationFrame"];
    //etc
    window.cancelAnimationFrame = window[v + "CancelAnimationFrame"] ||
      window[v + "CancelRequestAnimationFrame"];
  }
  //base class
  var Game = Class.extend({
    tick: function() {
      console.warn("should be overridden by child class!");
    },

    stop: function() {
      //cancel current frame
      if (this._reqframe) {
        window.cancelAnimationFrame(this._reqframe);
      }
      this._reqframe = null;
      this._running = false;
    },
    run: function() {
      if (this._running) return;
      this._running = true;
      var self = this;

      function loop() {
        //get frame
        self._reqframe = window.requestAnimationFrame(loop);
        //revisit
        self.tick();
        //get rid of current input
        input.clearPressed();
        //revisit
        canvas.flip();
      }
      //need more background to req frame
      this._reqframe = window.requestAnimationFrame(loop);
    }
  });
  return Game;
});
