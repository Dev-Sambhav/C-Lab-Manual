// finding number is Prime or Not.
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number:- ");
    scanf("%d",&num);

    if(num < 2){
        printf("Not a prime number");
        return 0;
    }

    for(int i=2; i<num; i++){
        if(num%i==0){
            printf("Not a prime number");
            return 0;
        }
    }
    printf("Prime Number");

return 0;
}