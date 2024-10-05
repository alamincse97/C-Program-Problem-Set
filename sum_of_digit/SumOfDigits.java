import java.util.Scanner;

public class SumOfDigits {

    // Function to calculate the sum of digits
    public static int sumOfDigits(int n) {
        int total = 0;

        // Loop through each digit of the number
        while (n > 0) {
            int digit = n % 10;  // Get the last digit
            total += digit;      // Add the digit to the sum
            n /= 10;             // Remove the last digit
        }

        return total;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input from the user
        System.out.print("Enter a positive integer: ");
        int num = scanner.nextInt();

        // Make sure the number is positive
        if (num < 0) {
            System.out.println("Please enter a positive integer.");
        } else {
            System.out.println("The sum of the digits of " + num + " is: " + sumOfDigits(num));
        }

        scanner.close();
    }
}
