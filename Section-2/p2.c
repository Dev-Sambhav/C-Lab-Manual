// Finding two values of quadratic equation
#include<stdio.h>
#include<math.h>

void solve(float a, float b, float c){
    float d = (b*b)-4*a*c;
    float root_1 = (-b + sqrt(d))/2*a;
    float root_2 = (-b - sqrt(d))/2*a;

    printf("First Value is %.2f",root_1);
    printf("\nSecond Value is %.2f",root_2);
}

int main(){
    float a,b,c;
    printf("Enter First Coefficient value :- ");
    scanf("%f",&a);
    printf("Enter Second Coefficient value :- ");
    scanf("%f",&b);
    printf("Enter Third Coefficient value :- ");
    scanf("%f",&c);

    solve(a,b,c);
return 0;
}