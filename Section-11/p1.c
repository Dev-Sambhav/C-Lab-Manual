// input n numbers and find out the maximum.
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:- ");
    scanf("%d",&n);
    int maxi = 0,num;
    printf("Enter %d numbers:- ",n);
    for(int i=0; i<n; i++){
        scanf("%d",&num);
        if(maxi < num) maxi = num;
    }
    printf("Maximum number is %d",maxi);
return 0;
}