def sum_of_digits(n):
    total = 0
    while n > 0:
        digit = n % 10  # Get the last digit
        total += digit  # Add the digit to the sum
        n = n // 10     # Remove the last digit
    return total

# Input from the user
num = int(input("Enter a positive integer: "))

# Make sure the number is positive
if num < 0:
    print("Please enter a positive integer.")
else:
    print(f"The sum of the digits of {num} is: {sum_of_digits(num)}")
