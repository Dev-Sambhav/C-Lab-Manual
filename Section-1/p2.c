// Calculate SI and CI
#include<stdio.h>
#include<math.h>

void SI(float p, float r, float t){
    float si = ((p*r*t)/100);
    printf("SI = %.2f",si);
}

void CI(float p, float r, float t){
    float ci = p*(pow((1+r/100),t));
    printf("CI = %.2f",ci);
}

int main(){
    float p,r,t;
    printf("Enter Principal :- ");
    scanf("%f",&p);
    printf("Enter Rate :- ");
    scanf("%f",&r);
    printf("Enter Rate :- ");
    scanf("%f",&t);

    SI(p,r,t);
    printf("\n");
    CI(p,r,t);

return 0;
}