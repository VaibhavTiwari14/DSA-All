console.log("Running Maths in JavaScript");

function countDigits(n) {
  let count = 0;
  while (n > 0) {
    let lastDigit = n % 10;
    count++;
    n /= 10;
  }
  return count;
}

function reverseANumber(n) {
  let num = 0;
  while (n > 0) {
    let lastDigit = n % 10;
    num = num * 10 + lastDigit;
    n /= 10;
  }
  return num;
}

function checkPalindrome(n) {
  return n == reverseANumber(n);
}

function armstrongNumber(n) {
  let sum = 0,
    num = n;
  while (n > 0) {
    let lastDigit = n % 10;
    sum += Math.pow(lastDigit, 3);
    n /= 10;
  }
  return num == sum;
}

function printAllDivisors(n) {
  let arr = [];
  //for(let i = 1 ; i <= Math.sqrt(n) ; i++){
  for (let i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      arr.push(i);
      if (i * i != n) arr.push(n / i);
    }
  }
  arr.sort();
  arr.forEach(function (num) {
    process.stdout.write(num + " ");
  });
}

function checkPrime(n) {
  if (n <= 1) return false;
  if (n <= 3) return true;
  if (n % 2 == 0 || n % 3 == 0) return false;
  for (let i = 5; i * i <= n; i += 6) {
    if (n % i == 0 || n % (i + 2) == 0) return false;
  }
  return true;
}

function gcdHcf(a,b) {
    if(b == 0) return a;
    return gcdHcf(b, a%b);
}

function lcm(a,b){ 
    return (a*b)/gcdHcf(a,b);
}
