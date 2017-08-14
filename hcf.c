#include<stdio.h>
int findhcf(inta,intb)
{
int temp;
if(a==0||b==0)
return0;
while(b!=0)
{
temp=a%b;
a=b;
b=temp;
}
return a;
}
int main()
{
int a,b;
int hcf;
printf("enter the first number");
scanf(%d,&a);
printf("enter the second number");
scanf("%d",&b);
hcf=findhcf(a,b);
printf("hcf of %d %d is=%d");
return 0;
}
}
