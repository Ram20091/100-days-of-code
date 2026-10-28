#include<stdio.h>
int main()
{
    int num;
    int revnum =0;
    int rem;
    int originalnum;
    printf("Enter thenumber : ");
    scanf("%d",&num);
    originalnum=num;
    while(num>0){
    rem=num%10;
    revnum=revnum*10+rem;
    num=num/10;}
 if(originalnum==revnum){
    printf("palindrome",originalnum);
 }
 else {
    printf("not palidrome",originalnum);
 }
  return 0; 
}