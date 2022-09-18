// finding minimum number among given three numbers.
#include<stdio.h>

void solve(int a, int b, int c){
    int min = 0;
    if(a<b){
        if(a<c) min = a;
        else min = c;
    }else{
        if(b<c) min = b;
        else min = c;
    }
    printf("Minimum value among %d, %d and %d is %d",a,b,c,min);
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