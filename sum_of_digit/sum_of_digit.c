/*
Write a program that read any positive integer and display sum of digits.

algorithm :- 

while (temp != 0)
{
    n = temp % 10;
    sum = sum + n;
    temp = temp / 10;
}

*/
#include <stdio.h>

int main()
{
    int num, temp, r, sum = 0; 

    printf("Enter a Positive Number: ");
    scanf("%d", &num);

    temp = num;

    while(temp != 0)
    {
        r = temp % 10;
        sum = sum + r;
        temp = temp / 10;
    }
    printf("Sum of Digit %d", sum);
    return 0;
}