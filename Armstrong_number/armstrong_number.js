let number = parseINT(prompt("Enter a number: "));
let temp = number
let armstrong_number = 0;

while(temp != 0){
    let r = temp % 10;
    armstrong_number += r ** 3;
    temp = Math.floor(temp / 10);
}

console.log(armstrong_number);
