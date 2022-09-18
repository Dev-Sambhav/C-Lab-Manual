// finding factorial number of the given number
#include<stdio.h>

void solve(int num){
    int fact = 1;
    for(int i=1; i<=num; i++){
        fact = fact * i;
    }
    printf("Factorial of %d is %d",num,fact);
}

int main(){
    int num;
    printf("Enter a number:- ");
    scanf("%d",&num);
    solve(num);
return 0;
}