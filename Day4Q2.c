#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int i;
    int sum=0;
    for(i=1; i<=n;i=i+1){
     sum=sum +i;
    }
    printf("%d",sum);
    return 0;
}