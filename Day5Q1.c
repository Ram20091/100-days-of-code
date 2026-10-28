#include<stdio.h>
#include<math.h>
int main()
{
  float rate,time,principle;
  float compund_intrest,simple_intrest;
  printf("Enter the Number : ");
  scanf("%f",&principle);
  printf("Enter the number : ");
  scanf("%f",&rate);
  printf("Enter the number : ");
  scanf("%f",&time);

  simple_intrest=(rate*time*principle)/100;
  printf("%f \n",simple_intrest);

  int total_amount=principle*pow((1+rate/100),time);
  compund_intrest=total_amount-principle;
  printf("%f \n",compund_intrest);
  return 0;
}