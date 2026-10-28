#include<stdio.h>
int main()
{
    int year;
    printf("enter the number : ");
    scanf("%d",&year);
    if((year%4==0) || (year%4==0  && year%4!=0)){
        printf("Leap year");
    }
    else{
        printf("Not Leap year");
    }
    return 0;
}