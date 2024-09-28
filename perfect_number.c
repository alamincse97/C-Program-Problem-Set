#include<stdio.h>

int perfect_number(int number){
    int sum = 0;
    for(int i=1; i<number; i++){
        if((number%i) == 0){
            sum = sum + i;
        }
    }
    if(sum == number)
        return 1;
    else
        return 0;
}

int main()
{
    int number;

    scanf("%d", &number);

    if(perfect_number(number)){
        printf("Perfect Number");
    }
    else{
        printf("Not a Perfect Number");
    }
    return 0;
}
