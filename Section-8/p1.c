// finding GCD (Greatest Common Divisor) of the given two numbers
#include<stdio.h>

void solve(int a, int b){
    int mini = a;
    if(mini > b) mini = b;

    while(a%mini != 0 || b%mini != 0){
        mini--;
    }

    printf("GCD of %d and %d is %d",a,b,mini);
}

int main(){
    int a,b;
    printf("Enter First Number :- ");
    scanf("%d",&a);
    printf("Enter Second Number :- ");
    scanf("%d",&b);

    solve(a,b);
return 0;
}