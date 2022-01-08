const $ = require('express').Router()

$.get('/', (req, res) => {
  res.render('index')
})

$.post('/', (req, res) => {
  var leds = []
  for (var k in req.body) {
    var v = req.body[k];
    if (typeof req.body[k] == 'object') v = req.body[k][0]
    leds.push(k[1] + v)
  }
  require('child_process').spawn('python',
  ['main.py','"'+leds.join(',')+'"'])
})

module.exports = $