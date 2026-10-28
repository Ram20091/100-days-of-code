#include<stdio.h>
int main()
{
    int a,rem;
    int sum=0;
    printf("Enter the number :");
    scanf("%d",&a);
     while(a>0){
        rem=a%10;
        sum=sum+rem;
        a=a/10;
     }
     printf("%d",sum);
     return 0;
}