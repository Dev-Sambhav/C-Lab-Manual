//  Swapping two numbers without using third variable
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter First Number :- ");
    scanf("%d",&a);
    printf("Enter Second Number :- ");
    scanf("%d",&b);

    printf("Before Swapping\n");
    printf("Value of A is %d\nValue of B is %d",a,b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nAfter Swapping\n");
    printf("Value of A is %d\nValue of B is %d",a,b);

return 0;
}