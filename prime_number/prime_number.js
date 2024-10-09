let n = parseInt(prompt("Enter an Integer: "));

let count = 0;

for (let i = 2; i < n; i++) {
    if (n % i === 0) {
        count++;
        break;
    }
}

if (count === 0) {
    console.log("Prime Number");
} else {
    console.log("Not a Prime Number");
}
