// Finding area of triangle by heroes formulae.
#include<stdio.h>
#include<math.h>

void solve(float a, float b, float c){
    float s = (a+b+c)/2;
    float area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area :- %.2f",area);
}

int main(){
    float a,b,c;
    printf("Enter First Side :- ");
    scanf("%f",&a);
    printf("Enter Second Side :- ");
    scanf("%f",&b);
    printf("Enter Third Side :- ");
    scanf("%f",&c);

    solve(a,b,c);

return 0;
}