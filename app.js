const express = require('express')
const expressHbs = require('express-handlebars')

const app = express()
const hbs = expressHbs.create({
  defaultLayout: 'main',
  extname: 'hbs'
})

app.engine('hbs', hbs.engine)
app.set('view engine', 'hbs')
app.set('views', 'views')

app.use(express.urlencoded({ extended: true }))
app.use(express.static('public'))
app.use(require('./router'))

app.listen(p = 8000, h = '192.168.0.105', ()=>{
  console.log('http://'+ h +':'+ p);
})