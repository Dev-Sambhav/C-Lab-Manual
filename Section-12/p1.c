// input a number and count its digits.
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:- ");
    scanf("%d",&n);
    int digit = n;
    int count = 0;
    do{
        count++;
        n = n/10;
    }while(n);
    printf("Count of digit %d is %d",digit,count);
return 0;
}