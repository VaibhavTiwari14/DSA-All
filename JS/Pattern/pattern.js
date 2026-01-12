const n = Number(prompt("What should be the value of n"));

function pattern1(n) {
  for (let i = 0; i < n; i++) {
    for (let i = 0; i < 5; i++) {
      process.stdout.write("* ");
    }
    console.log();
  }
}

function pattern2(n) {
  for (let i = 0; i < n; i++) {
    for (let j = 0; j <= i; j++) {
      process.stdout.write("* ");
    }
    console.log();
  }
}

function pattern3(n) {
  for (let i = 0; i < n; i++) {
    for (let j = 0; j <= i; j++) {
      process.stdout.write(j + 1 + " ");
    }
    console.log();
  }
}

function pattern4(n) {
  for (let i = 0; i < n; i++) {
    for (let j = 0; j <= i; j++) {
      process.stdout.write(i + 1 + " ");
    }
    console.log();
  }
}

function pattern5(n) {
  for (let i = 0; i < n; i++) {
    for (let j = 0; j < n - i; j++) {
      process.stdout.write("* ");
    }
    console.log();
  }
}

function pattern6(n) {
  for (let i = 0; i < n; i++) {
    for (let j = 0; j < n - i; j++) {
      process.stdout.write(j + 1 + " ");
    }
    console.log();
  }
}

function pattern7(n) {
  for (let i = 0; i < n; i++) {
    for (let j = 0; j < n - i - 1; j++) {
      process.stdout.write(" ");
    }
    for (let j = 0; j < 2 * i + 1; j++) {
      process.stdout.write("*");
    }
    for (let j = 0; j < n - i - 1; j++) {
      process.stdout.write(" ");
    }
    console.log();
  }
}

function pattern8(n) {
  for (let i = 0; i < n; i++) {
    for (let j = 0; j < i; j++) {
      process.stdout.write(" ");
    }
    for (let j = 0; j < 2 * (n - i); j++) {
      process.stdout.write("*");
    }
    for (let j = 0; j < i; j++) {
      process.stdout.write(" ");
    }
    console.log();
  }
}

function pattern9(n) {
  pattern7(n);
  pattern8(n);
}

function pattern10(n) {
  for (let i = 0; i < n; i++) {
    for (let j = 0; j < i + 1; j++) {
      process.stdout.write("*");
    }
    console.log();
  }
  for (let i = 0; i < n - 1; i++) {
    for (let j = 0; j < n - i - 1; j++) {
      process.stdout.write("*");
    }
    console.log();
  }
}

function pattern11(n) {
  for (let i = 0; i < n; i++) {
    let start = i % 2 == 0 ? 1 : 0;
    for (let j = 0; j <= i; j++) {
      process.stdout.write(start + " ");
      start = 1 - start;
    }
    console.log();
  }
}

function pattern12(n) {
  let space = (n - 1) * 2;
  for (let i = 0; i < n; i++) {
    for (let j = 0; j <= i; j++) {
      process.stdout.write(j + 1);
    }
    for (let j = 0; j < space; j++) {
      process.stdout.write(j + 1);
    }
    for (let j = i; j >= 0; j--) {
      process.stdout.write(j + 1);
    }
    console.log();
    space -= 2;
  }
}

function pattern13(n) {
  let count = 1;
  for (let i = 0; i < n; i++) {
    for (let j = 0; j <= i; j++) {
      process.stdout.write(count++);
    }
    console.log();
  }
}

function pattern14(n) {
  for (let i = 0; i < n; i++) {
    let c = "A".charCodeAt(0);
    for (let j = 0; j <= i; j++) {
      process.stdout.write(String.fromCharCode(c) + " ");
      c++;
    }
    console.log();
  }
}

function pattern15(n) {
  for (let i = 0; i < n; i++) {
    let c = "A".charCodeAt(0);
    for (let j = 0 ; j < n-i ; j++){
        process.stdout.write(String.fromCharCode(c) + " ");
        c++;
    }
    console.log();
  }
}

function pattern16(n) {
    for (let i = 0 ; i < n ; i++){
        let c = "A".charCodeAt(0);
        for(let j = 0 ; j <= i ; j++){
            process.stdout.write(String.fromCharCode(c)+" ");
        }
        c++;
        console.log();
    }
}

pattern1(n);
pattern2(n);
pattern3(n);
pattern4(n);
pattern5(n);
pattern6(n);
pattern7(n);
pattern8(n);
pattern9(n);
pattern10(n);
pattern11(n);
pattern12(n);
pattern13(n);
pattern14(n);
pattern15(n);
pattern16(n);