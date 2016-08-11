canvas.width = 20;
canvas.height = 20;
canvas.scale = 20;

var c = canvas.ctx;

c.beginPath();
c.arc(10, 10, 5, 0, 7);
c.fill();

canvas.flip();