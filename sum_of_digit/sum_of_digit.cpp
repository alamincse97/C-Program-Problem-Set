#include <iostream>
using namespace std;

// Function to calculate the sum of digits
int sumOfDigits(int n) {
    int total = 0;

    // Loop through each digit of the number
    while (n > 0) {
        int digit = n % 10;  // Get the last digit
        total += digit;      // Add the digit to the sum
        n /= 10;             // Remove the last digit
    }
    return total;
}

int main() {
    int num;

    // Input from the user
    cout << "Enter a positive integer: ";
    cin >> num;

    // Make sure the number is positive
    if (num < 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        cout << "The sum of the digits of " << num << " is: " << sumOfDigits(num) << endl;
    }

    return 0;
}
