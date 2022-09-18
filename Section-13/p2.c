// input a number check it is Armstrong or not.
#include <stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter a Number:- ");
    scanf("%d",&n);
    int num2=n;
    int sum=0,num=n,c=0;
    // count the total digits
    while(num2>0){
        c++;
        num2 /= 10;
    }
    while(n>0){
        sum = sum + round(pow(n%10,c));
        n/= 10;
    }
    if(sum == num){
        printf("Armstrong Number");
    }else{
        printf("Not a Armstrong Number");
    }
return 0;
}