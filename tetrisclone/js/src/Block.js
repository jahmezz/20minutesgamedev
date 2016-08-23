define(function() {
  //each shape has an id
  var drawIds = {
    NONE: 0,
    I: 1,
    Z: 2,
    J: 3,
    L: 4,
    S: 5,
    O: 6,
    T: 7
  }
  var Block = Class.extend({
    init: function(id) {
      this.setType(id || "none");
    },
    setType: function(id) {
      //if the id is a number use it, if not, take from drawids[id]
      this.id = typeof id === "number" ? id : drawIds[id.toUpperCase()];
      //if the id is not none, this block is solid
      this.solid = this.id !== drawIds.NONE;
    }
  });

  for (var id in drawIds) {
    Block[id] = drawIds[id];
  }

  return Block;
})