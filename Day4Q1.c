#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number : ");
    scanf("%d",&a);
    printf("Enter the number : ");
    scanf("%d",&b);
    //before swap
    printf("%d%d \n",a,b);
    // after swap
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d%d \n",a,b);
    return 0;
}