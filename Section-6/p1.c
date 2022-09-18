//  find out maximum number among three numbers using Ternary Operator (Conditional operator).
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter First Number :- ");
    scanf("%d",&a);
    printf("Enter Second Number :- ");
    scanf("%d",&b);
    printf("Enter Third Number :- ");
    scanf("%d",&c);

    int maxi = (a>b) ? (a>c) ? a : c : (b>c) ? b : c;

    printf("Maximum value among %d, %d and %d is %d",a,b,c,maxi);

return 0;
}