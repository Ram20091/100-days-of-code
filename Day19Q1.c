#include<stdio.h>
int main()
{
    int a,b,i,lcm;
    int hcf=1;
    printf("Enter the number :" );
    scanf("%d%d",&a,&b);
    for(i=1;i<=a && i<=b;i=i+1){
        if(a%i==0 && b%i==0){
            hcf=i;
        }
    }
    lcm=(a*b)/hcf;
    printf("%d",lcm);
    return 0;
}