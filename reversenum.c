#include<stdio.h>
void main()
{
int n,r,sum;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
sum=(sum*10)+r;
n%=10;
printf("the reverse of number is sum");
}
}
