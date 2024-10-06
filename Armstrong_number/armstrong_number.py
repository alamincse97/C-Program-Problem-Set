number = int(input("Enter a number: "))

temp = number
armstrong_number = 0

while temp != 0:
    r = temp % 10
    armstrong_number += r**3
    temp //= 10
    
print(armstrong_number)