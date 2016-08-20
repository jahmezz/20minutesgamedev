define([
  "src/GameBoard",
  "src/StatManager",
  "src/Tetramino",
  "src/Block",
  "src/Randomizer"
  ], function(GameBoard, StatManager, Tetramino, Block, Randomizer) {
  var Tetris = Class.extend({
    //initialize variables
    init: function(cols, rows) {
      this.cols = cols;
      this.rows = rows;
      this.gameBoard = new GameBoard();
      this.stat = new StatManager();
      this.random = new Randomizer();

      this.blockControl = [];

      this.reset();
    },
    //clear out the board
    reset: function() {
      this.frames = 1;
      this.blockControl = [];
      for (var i = 0; i < this.cols; i++) {
        this.blockControl[i] = [];
        for (var j = 0; j < this.rows; j++) {
          this.blockControl[i][j] = new Block(Block.NONE);
        }
      }
      this.random.initialize();
      this.setNextTetramino();
    },
    update: function(input) {
      this.currentTetramino.setTo(this.blockControl, Block.NONE);
      
      //move functions
      if(input.pressed("up")) {
        this.moveRotate();
      }
      if(input.pressed("down")) {
        this.moveDown();
      }
      if(input.pressed("left")) {
        this.moveLeft();
      }
      if(input.pressed("right")) {
        this.moveRight();
      }
      if(input.pressed("space")) {
        this.hardDrop();
      }

      //move down every 20 frames
      if (this.frames++ % 20 === 0) {
        this.moveDown();
      }
      this.currentTetramino.setTo(this.blockControl);
    },
    //draw a block if there is meant to be one on that part of the game board
    draw: function(ctx) {
      this.gameBoard.draw(ctx, this.stat);
      for (var i = 0; i < this.cols; i++) {
        for (var j = 0; j < this.rows; j++) {
          var b = this.blockControl[i][j];
          if (b.solid) {
            this.gameBoard.drawBlock(ctx, b, i, j);
          }
        }
      }
    },
    //grab new random tetramino
    setNextTetramino: function() {
      this.currentTetramino = new Tetramino(this.random.nextId());
      //start it at (3, 0)
      this.currentTetramino.x = 3;
      this.currentTetramino.y = 0;

      //increase tetramino count
      this.stat.incTetramino(this.currentTetramino.id);
    },
    //move logic
    moveLeft: function() {
      var bc = this.blockControl,
          ct = this.currentTetramino;

      //check if left is empty
      if (ct.check(bc, -1, 0)) {
        //if so, move left
        ct.x -= 1;
      }
    },
    moveRight: function() {
      var bc = this.blockControl,
          ct = this.currentTetramino;

      if (ct.check(bc, 1, 0)) {
        ct.x += 1;
      }
    },
    moveRotate: function(dr) {
      //listen to video again about this part
      dr = dr || 1;
      var bc = this.blockControl,
          ct = this.currentTetramino;

      if (ct.check(bc, 0, 0, dr)) {
        ct.rotation = ct.getRotation(dr);
      }
    },
    moveDown: function() {
      var bc = this.blockControl,
          ct = this.currentTetramino;

      //nothing below, move down
      if (ct.check(bc, 0, 1)) {
        ct.y += 1;
      //something below
      } else {
        ct.setTo(bc);
        //delete row if line
        this.checkRows();
        //grab next tetramino from bag
        this.setNextTetramino();
      }
    },
    hardDrop: function() {
      var bc = this.blockControl,
          ct = this.currentTetramino,
          move = true;

      //while there is room below
      while (move) {
        //nothing below
        if (ct.check(bc, 0, 1)) {
          ct.y += 1;
          //add score while dropping
          this.stat.score += 2;
        } else {
          //reached end
          move = false;
          ct.setTo(bc);
          this.checkRows();
          this.setNextTetramino();
        }
      }
    },
    checkRows: function() {
      var full, removed = 0;

      for (var i = this.rows-1; i >= 0; i--) {
        //first, assume row is full of blocks
        full = true;
        for (var j = 0; j < this.cols; j++) {
          if (!this.blockControl[j][i].solid) {
            //one is empty, not full
            full = false;
            break;
          }
        }

        //case: we have a line on this row
        //remove and increment line count
        if (full) {
          this.removeRow(i);
          removed++;
          this.stat.lines++;
          i++;
        }
      }
      //if we removed something, add score and see if there's a level up
      if (removed > 0) {
        this.stat.addScore(removed);
        this.stat.checkLvlUp();
      }
    },

    //remove row from board
    removeRow: function(row) {
      var bc = this.blockControl;
      for (var i = row; i > 0; i--) {
        for (var j = 0; j < this.cols; j++) {
          //move all blocks from that removed row and above, down one
          bc[j][i].setType(bc[j][i - 1].id);
        }
      }
    }
  });
  return Tetris;
})
