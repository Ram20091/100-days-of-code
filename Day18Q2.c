#include<stdio.h>
int main()
{
    int a,b,i;
    int hcf=1;
    printf("Enter the number : ");
    scanf("%d%d", &a,&b);
    for(i=1; i<=a && i<=b;i=i+1){
        if(a%i==0 && b%i==0){
            hcf=i;
        }
    }
    printf("The hcf is:%d",hcf);
    return 0;
}