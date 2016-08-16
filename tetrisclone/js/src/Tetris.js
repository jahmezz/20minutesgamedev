define([
  "src/GameBoard",
  "src/StatManager",
  "src/Tetramino",
  "src/Block"
  ], function(GameBoard, StatManager, Tetramino, Block) {
  var Tetris = Class.extend({
    init: function(cols, rows) {
      this.cols = cols;
      this.rows = rows;
      this.gameBoard = new GameBoard();
      this.stat = new StatManager();

      this.blockControl = [];

      this.reset();
    },
    reset: function() {
      this.frames = 1;
      this.blockControl = [];
      for (var i = 0; i < this.cols; i++) {
        this.blockControl[i] = [];
        for (var j = 0; j < this.rows; j++) {
          this.blockControl[i][j] = new Block(Block.NONE);
        }
      }
      this.currentTetramino = new Tetramino(Tetramino.Z);
      this.currentTetramino.x = 3;
      this.currentTetramino.setTo(this.blockControl);
    },
    update: function(input) {
      this.currentTetramino.setTo(this.blockControl, Block.NONE);
      if (this.frames++ % 20 === 0) {
        this.moveDown();
      }
      this.currentTetramino.setTo(this.blockControl);
    },
    draw: function(ctx) {
      this.gameBoard.draw(ctx, this.stat);

      console.log(this.blockControl[0][0]);
      for (var i = 0; i < this.cols; i++) {
        for (var j = 0; j < this.rows; j++) {
          var b = this.blockControl[i][j];
          if (b.solid) {
            this.gameBoard.drawBlock(ctx, b, i, j);
          }
        }
      }
    },

    moveDown: function() {
      var bc = this.blockControl,
          ct = this.currentTetramino;

      if (ct.check(bc, 0, 1)) {
        ct.y += 1;
      }
    }
  });
  return Tetris;
})
