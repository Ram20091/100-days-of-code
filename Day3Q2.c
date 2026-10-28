#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number : ");
    scanf("%d",&a);
    printf("Enter the number : ");
    scanf("%d",&b);
    // before swaping
    printf("%d%d \n",a,b);
    // after swaping
    c=a;
    a=b;
    b=c;
    printf("%d%d",a,b);
    return 0;
}