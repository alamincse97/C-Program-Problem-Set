#include<stdio.h>

int main(){
    int number, r, temp, sum = 0;
    scanf("%d", &number);

    temp = number;

    while(temp != 0){
        r = temp % 10;
        sum = sum + r*r*r;
        temp = temp / 10;
    }
    printf("%d", sum);

    return 0;
}