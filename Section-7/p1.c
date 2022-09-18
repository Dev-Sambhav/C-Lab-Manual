// printing all natural number from 1 to 500 which is divisible by 9.
#include<stdio.h>
int main(){
    for(int i=1; i<=500; i++){
        if(i % 9 == 0){
            printf("%d ",i);
        }
    }
return 0;
}