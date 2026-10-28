#include<stdio.h>
int main()
{
    int a;int i;
    printf("Enter the number : ");
    scanf("%d",&a);
    for(i=1;i<=a;i=i+1){
        if(a%i==0){
            printf("%d\n",i);
        }
    }
    printf("\n");
    return 0;
}