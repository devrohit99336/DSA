// By reference (all objects (including functions))
var c = { greeting : 'Welcome' };
var d;
d = c;

// Mutating the value of c
c.greeting = 'Welcome to Code';
console.log(c);
console.log(d);