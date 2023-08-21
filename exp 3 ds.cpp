#include<stdio.h>
int main()
{
int n,i,fact=1;
printf("enter the number");
scanf("%d",&n);
for(i = n;i>=1;i--)
{
fact=fact*i;
} 
printf("the factorial of %d:",fact);
return 0;
}
