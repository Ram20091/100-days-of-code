#include<stdio.h>
int main(){
    int a;
    int rev =0;
    int rem;
    printf("Enter the number : ");
    scanf("%d",&a);
    while(a!=0)
    {
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    printf("%d\n",rev);
    return 0;
}
