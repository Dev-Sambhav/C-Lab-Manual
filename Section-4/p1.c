// finding number is even or odd.
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number :- ");
    scanf("%d",&num);

    if(num % 2 == 0) printf("%d is a even number.",num);
    else printf("%d is not a even number.",num);

return 0;
}