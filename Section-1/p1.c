// Average of three number
#include<stdio.h>

void solve(int a, int b, int c){
    float avg;
    avg = (float)(a+b+c)/3;
    printf("Average of %d, %d and %d is %.2f", a,b,c,avg);
}

int main(){
    int a,b,c;
    printf("Enter First Number :- ");
    scanf("%d",&a);
    printf("Enter Second Number :- ");
    scanf("%d",&b);
    printf("Enter Third Number :- ");
    scanf("%d",&c);

    solve(a,b,c);

return 0;
}