// find out Electricity Bill by inputtung previous meter reading and 
// current meter reading as per given criteria
// a. If total unit <=100 then charge will be 3.5/Unit
// b. If total unit>100 and <=200 then charge will be 4/Unit
// c. If total unit>200 and <=300 then charge will be 4.5/Unit
// d. If total unit>300 then charge will be 5/Unit

#include<stdio.h>
int main(){
    float pi, ci;
    printf("Enter previous meter reading:- ");
    scanf("%f",&pi);
    printf("Enter current meter reading:- ");
    scanf("%f",&ci);

    float tu = pi+ci;

    if(tu <= 100){
        tu = (tu * 3.5);
    }else if(tu <= 200){
        tu = (100 * 3.5)+(tu-100)*4;
    }else if(tu <= 300){
        tu = (100 * 3.5)+(100 * 4)+(tu - 200)*4.5;
    }else if(tu > 300){
        tu = (100 * 3.5)+(100 * 4)+(100 * 20)+(tu - 300)*4.5;
    }

    printf("Total Bill is %.2f",tu);


return 0;
}