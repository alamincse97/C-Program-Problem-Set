n = int(input("Enter an Integer: "))

count = 0

for i in range(2, n):
    if n % i == 0:
        count += 1
        break
if count == 0:
    print("Prime Number")
else:
    print("Not a Prime Number")