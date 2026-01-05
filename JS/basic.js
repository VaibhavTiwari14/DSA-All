/*
========================================
 JAVASCRIPT BASIC SYNTAX REFERENCE FILE
========================================
*/

// Read input (Node.js)
const fs = require("fs");
const input = fs.readFileSync(0, "utf8").trim().split(/\s+/);
let idx = 0;

// Function example
function add(a, b) {
  return a + b;
}

// Output
console.log("Hello from JavaScript");

// Input: single value
let x = Number(input[idx++]);
console.log("x =", x);

// If-else
if (x % 2 === 0) {
  console.log("Even");
} else {
  console.log("Odd");
}

// For loop
for (let i = 0; i < 3; i++) {
  process.stdout.write(i + " ");
}
console.log();

// While loop
let i = 0;
while (i < 3) {
  process.stdout.write(i + " ");
  i++;
}
console.log();

// Array
let n = Number(input[idx++]);
let arr = [];
for (let i = 0; i < n; i++) {
  arr.push(Number(input[idx++]));
}

for (let v of arr) {
  process.stdout.write(v + " ");
}
console.log();

// Function call
console.log("Sum =", add(2, 3));
