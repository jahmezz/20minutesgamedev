define(["src/Numfont"], function(Numfont) {
  var GameBoard = Class.extend({
    init: function() {
      //grab back, block and num from content manager
      //back is background
      //blocks is block colors
      //num is number image
      this.back = content.get("back");
      this.blocks = content.get("blocks");
      var num = content.get("numbers");
      //grab images for color
      this.font = {
        gray  : new Numfont(num, 0, 9),
        cyan  : new Numfont(num, 9, 9),
        red   : new Numfont(num, 18, 9),
        blue  : new Numfont(num, 27, 9),
        orange: new Numfont(num, 36, 9),
        green : new Numfont(num, 46, 9),
        yellow: new Numfont(num, 54, 9),
        purple: new Numfont(num, 63, 9)
      };
    },
    draw: function(ctx, stat) {
      //grab tetramino counts and total
      var tet = stat.tetraminos;
      //draw the background
      ctx.drawImage(this.back, 0, 0);

      //draw numbers
      this.font.gray.draw(ctx, stat.lvl, 113, 16, 5);
      this.font.gray.draw(ctx, stat.lines, 113, 34, 5);
      this.font.gray.draw(ctx, stat.score, 80, 52, 10);

      this.font.purple.draw(ctx, 42, 10, 10, 5);

      this.font.orange.draw(ctx, tet.L, 432, 52,  5);
      this.font.cyan.draw(ctx,   tet.I, 432, 76,  5);
      this.font.purple.draw(ctx, tet.T, 432, 100, 5);
      this.font.green.draw(ctx,  tet.S, 432, 125, 5);
      this.font.red.draw(ctx,    tet.Z, 432, 148, 5);
      this.font.yellow.draw(ctx, tet.O, 432, 172, 5);
      this.font.blue.draw(ctx,   tet.J, 432, 196, 5);

      this.font.gray.draw(ctx, tet.tot, 425, 221, 6);
    },
    drawBlock: function(ctx, block, x, y) {
      //draw a block based on board placement
      //id is blocks id...
      //size is ?
      var id = block.id,
          size = 13;

      //start at x/y pixels and add 12 for each square i want to scoot over
      x = 180 + x*12;
      y = 4 + y*12;

      ctx.drawImage(this.blocks, id*(size-1), 0, size, size, x, y, size, size);
    }
  });

  return GameBoard;
})