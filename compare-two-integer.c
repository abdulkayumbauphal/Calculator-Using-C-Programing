#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter int Number: ");
    scanf("%d %d", &a, &b);

    if(a>=b){
    if(a==b){
    printf("Result: %d = %d", a ,b);
    }
    else{
    printf("Result: %d > %d", a, b);
    }
    }
    else{
    printf("Result: %d < %d", a, b);
    }


    return 0;
}
