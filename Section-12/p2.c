//  input a number and sum its digits.
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:- ");
    scanf("%d",&n);
    int sum = 0, num=n;
    while(n){
        sum += (n%10);
        n = n/10;
    }
    printf("Sum of digit %d is %d",num,sum);
return 0;
}