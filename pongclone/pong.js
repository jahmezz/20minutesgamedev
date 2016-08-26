//try requestanimationframe
//if doesn't work set base 60 fps
var animate = window.requestAnimationFrame ||
  window.webkitRequestAnimationFrame ||
  window.mozRequestAnimationFrame ||
  function(callback) { window.setTimeout(callback, 1000/60) };

//set up canvas
var canvas = document.createElement('canvas');
var width = 400;
var height = 600;
canvas.width = width;
canvas.height = height;
//grab 2d context
var context = canvas.getContext('2d');

//when the browser is done loading, attach canvas and start loop
window.onload = function() {
  document.body.appendChild(canvas);
  animate(step);
};

//game loop
var step = function() {
  //update game info
  update();
  //draw
  render();
  //queue next frame
  animate(step);
};

//update functions
var update = function() {
  ball.update();
};

//attach update function to ball
Ball.prototype.update = function() {
  this.x += this.x_speed;
  this.y += this.y_speed;
};

var render = function() {
  context.fillStyle = "#FF00FF";
  context.fillRect(0, 0, width, height);
};

//paddle object
function Paddle(x, y, width, height) {
  this.x = x;
  this.y = y;
  this.width = width;
  this.height = height;
  this.x_speed = 0;
  this.y_speed = 0;
}


//what the paddle looks like
Paddle.prototype.render = function() {
  context.fillStyle = "#0000FF";
  context.fillRect(this.x, this.y, this.width, this.height);
};

//pixel location, width, height of player paddle
function Player() {
   this.paddle = new Paddle(175, 580, 50, 10);
}

//computer paddle
function Computer() {
  this.paddle = new Paddle(175, 10, 50, 10);
}

//append render function to objects
Player.prototype.render = function() {
  this.paddle.render();
};
Computer.prototype.render = function() {
  this.paddle.render();
};

//ball object
function Ball(x, y) {
  this.x = x;
  this.y = y;
  this.x_speed = 0;
  this.y_speed = 3;
  this.radius = 5;
}

//append ball render function
Ball.prototype.render = function() {
  //start drawing line
  context.beginPath();
  //draw arc starting at this x y and certain radius and draw for 2 pi
  context.arc(this.x, this.y, this.radius, 2 * Math.PI, false);
  //white
  context.fillStyle = "#000000";
  //fill it in
  context.fill();
};

//draw game
var player = new Player();
var computer = new Computer();
//start ball at 200, 300 pixels
var ball = new Ball(200, 300);

//called during draw loop
var render = function() {
  //fill screen with magneta color
  context.fillStyle = "#FF00FF";
  context.fillRect(0, 0, width, height);
  //draw ball comp and player
  player.render();
  computer.render();
  ball.render();
};