//set up require
requirejs.config({
  //the root module path
  baseUrl: "js",
  //relative paths to base
  //this means we can pull resources from js and js/src (and src is shortcut for ./src)
  paths: {
    src: "./src"
  }
});
//actually fetch resources for function
require(["src/Game", "src/Tetris"], function(Game, Tetris) {
  //RETURN AND WRITE COMMENT HERE
  var App = Game.extend({
    init: function() {
      //set up canvas
      canvas.width = 480;
      canvas.height = 272;
      canvas.scale = 1;

      //load images into game
      content.load("back", "res/back.png");
      content.load("blocks", "res/blocks.png");
      content.load("numbers", "res/numbers.png");

      //bind keys
      input.bindKey("space", input.Keys.SPACE);
      input.bindKey("left", input.Keys.LEFT_ARROW, input.Keys.A);
      input.bindKey("up", input.Keys.UP_ARROW, input.Keys.W);
      input.bindKey("right", input.Keys.RIGHT_ARROW, input.Keys.D);
      input.bindKey("down", input.Keys.DOWN_ARROW, input.Keys.S);
      
      //game cannot start yet
      this.hasLoad = false;
    },

    tick: function() {
      //game loaded, start moving and drawing
      if (this.hasLoad) {
        this.tetris.update(input);
        this.tetris.draw(canvas.ctx);
      } else {
        this.hasLoad = content.progress() === 1;
        //if loaded, start new tetris game
        if(this.hasLoad) {
          this.tetris = new Tetris(10, 22);
        }
      }
    }
  });
  //entry point of entire app
  (function() {
    var game = new App();
    //run game
    game.run();

    //if we click away from screen, stop game. opposite if we click in
    window.onblur = game.stop.bind(game);
    window.onfocus = game.run.bind(game);
  })();
});
