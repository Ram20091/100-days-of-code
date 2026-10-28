#include<stdio.h>
int main()
{
    int l,b;
    printf("Enter the number : ");
    scanf("%d",&l);
    printf("Enter the number : ");
    scanf("%d",&b);
    // Area of rectangle
    int c =l*b;
    printf("%d \n",c);
    //perimeter of a rectangle
    int d=2*(l+b);
    printf("%d \n",d);
    return 0;
}