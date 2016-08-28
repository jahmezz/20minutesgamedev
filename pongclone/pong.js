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

//update functions
var update = function() {
  player.update();
  computer.update(ball);
  ball.update(player.paddle, computer.paddle);
};

Computer.prototype.update = function(ball) {
  //computer reacts to ball
  var x_pos = ball.x;
  //break this down. paddle width/2
  //-(middle of paddle - x of ball)
  var diff = -((this.paddle.x + (this.paddle.width / 2)) - x_pos);
  //if the ball is > 4 to the left, max speed
  if(diff < -4) { // max speed left
    diff = -5;
  //right
  } else if(diff > 4) { // max speed right
    diff = 5;
  }
  //move the diff
  this.paddle.move(diff, 0);
  //hit wall
  if(this.paddle.x < 0) {
    this.paddle.x = 0;
  //hit wall
  } else if (this.paddle.x + this.paddle.width > 400) {
    this.paddle.x = 400 - this.paddle.width;
  }
};

Player.prototype.update = function() {
  //loop through keys
  for(var key in keysDown) {
    //get number
    var value = Number(key);
    //left
    if(value == 37) { // left arrow
      this.paddle.move(-4, 0);
    //right
    } else if (value == 39) { // right arrow
      this.paddle.move(4, 0);
    //nothing
    } else {
      this.paddle.move(0, 0);
    }
  }
};

Paddle.prototype.move = function(x, y) {
  this.x += x;
  this.y += y;
  this.x_speed = x;
  this.y_speed = y;
  if(this.x < 0) { // all the way to the left
    this.x = 0;
    this.x_speed = 0;
  } else if (this.x + this.width > 400) { // all the way to the right
    this.x = 400 - this.width;
    this.x_speed = 0;
  }
}

//ball update
Ball.prototype.update = function(paddle1, paddle2) {
  //move ball
  this.x += this.x_speed;
  this.y += this.y_speed;
  //top of ball
  var left_x = this.x - 5;
  var top_y = this.y - 5;
  //bottom of ball
  var right_x = this.x + 5;
  var bottom_y = this.y + 5;

  if(left_x < 0) { // hitting the left wall
    this.x = 5;
    //bounce off
    this.x_speed = -this.x_speed;
  } else if(this.x + 5 > 400) { // hitting the right wall
    this.x = 395;
    //bounce
    this.x_speed = -this.x_speed;
  }

  //ball went off top or bottom. reset to center
  if(this.y < 0 || this.y > 600) { // a point was scored
    this.x_speed = 0;
    this.y_speed = 3;
    this.x = 200;
    this.y = 300;
  }

  //if top of ball is below a certain point
  if(top_y > 300) {
    //if top of ball is below hitting end of paddle, bottom of ball is above other end of paddle
    //left of ball is to the left of right end of paddle, and right of ball is right of left paddle
    if(top_y < (paddle1.y + paddle1.height) && bottom_y > paddle1.y && left_x < (paddle1.x + paddle1.width) && right_x > paddle1.x) {
      //bounce
      this.y_speed = -3;
      //speed of ball is based on speed of paddle
      this.x_speed += (paddle1.x_speed / 2);
      //move
      this.y += this.y_speed;
    }
  //top of ball is not below a certain point
  } else {
    //if top of ball is below paddle, bottom of ball is above paddle, left of ball is on paddle
    //and right of ball is on paddle
    if(top_y < (paddle2.y + paddle2.height) && bottom_y > paddle2.y && left_x < (paddle2.x + paddle2.width) && right_x > paddle2.x) {
      // hit the computer's paddle
      this.y_speed = 3;
      this.x_speed += (paddle2.x_speed / 2);
      this.y += this.y_speed;
    }
  }
};

//events
var keysDown = {};

//record keydown for as long as key is down
window.addEventListener("keydown", function(event) {
  keysDown[event.keyCode] = true;
});
//remove keydown when key up
window.addEventListener("keyup", function(event) {
  delete keysDown[event.keyCode];
});



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