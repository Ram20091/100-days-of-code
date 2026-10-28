#include<stdio.h>
int main()
{
    int a;
    int fact =1;
    int i;
    printf("Enter the number : ");
    scanf("%d",&a);
    for(i=1;i<=a;i=i+1){
    fact=fact*i;}
    printf("%d\n",fact);
    return 0;
}