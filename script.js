// Testing c++ add-on inside our js

console.log("-------SCRIPT OUTPUT------")

const myAddon = require('./build/Release/addon')
const runAddon = () => myAddon.TestFunction()

runAddon()