const fs = require('fs')

let x = fs.readFileSync('shortcut.md', 'utf-8')
x = x.replace('\n', '\\n')
console.log(x);