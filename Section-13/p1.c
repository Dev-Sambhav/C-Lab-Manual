//  input a number and print its reverse
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:- ");
    scanf("%d",&n);
    printf("Reverse of %d is :- ",n);
    while(n){
        printf("%d",n%10);
        n = n/10;
    }
return 0;
}