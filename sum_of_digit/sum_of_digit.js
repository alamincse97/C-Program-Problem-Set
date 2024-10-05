function sumOfDigits(n) {
    let total = 0;

    // Loop through each digit of the number
    while (n > 0) {
        let digit = n % 10;  // Get the last digit
        total += digit;      // Add the digit to the sum
        n = Math.floor(n / 10);  // Remove the last digit
    }

    return total;
}

// Input from the user
let num = prompt("Enter a positive integer: ");
num = parseInt(num, 10);

// Make sure the number is positive
if (isNaN(num) || num < 0) {
    console.log("Please enter a valid positive integer.");
} else {
    console.log(`The sum of the digits of ${num} is: ${sumOfDigits(num)}`);
}
