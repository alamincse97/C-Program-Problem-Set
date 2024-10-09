#include <stdio.h>

int main()
{
    printf("Enter an integer: \n");
    int n;
    int count = 0;
    scanf("%d", &n);

    for(int i=2; i<n; i++){
        if(n%i == 0){
            count++;
            break;
        }
    }
    if(count == 0){
        printf("Prime Number");
    }
    else
        printf("Not a Prime Number");
    return 0;
}