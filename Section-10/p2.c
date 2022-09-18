// input month number and year find out total numbers of days in 
// that month using switch........ case.......... 
#include<stdio.h>

int isLeapYear(int year){
    if(year % 100 == 0){
        if(year % 400 == 0) return 1;
        else return 0;
    }else{
        if(year % 4 == 0) return 1;
        else return 0;
    }
}

int main(){
    int m,y;
    printf("Enter a month number:- ");
    scanf("%d",&m);
    printf("Enter a year:- ");
    scanf("%d",&y);

    switch(m){
        case 1:
            printf("Total day number in January is 31");
            break;
        case 2:
            if(isLeapYear(y)){
                printf("Total day number in February is 29");
            }else printf("Total day number in February is 28");
            break;
        case 3:
            printf("Total day number in March is 31");
            break;
        case 4:
            printf("Total day number in April is 30");
            break;
        case 5:
            printf("Total day number in May is 31");
            break;
        case 6:
            printf("Total day number in June is 30");
            break;
        case 7:
            printf("Total day number in July is 31");
            break;
        case 8:
            printf("Total day number in August is 31");
            break;
        case 9:
            printf("Total day number in September is 30");
            break;
        case 10:
            printf("Total day number in October is 31");
            break;
        case 11:
            printf("Total day number in November is 30");
            break;
        case 12:
            printf("Total day number in December is 31");
            break;
        default:
            printf("Wrong month number!!!");
    }

return 0;
}