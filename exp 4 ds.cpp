#include<stdio.h>
int main()
{
int n,first=0,second=1,next;
printf("enter the number of terms"); 
scanf("%d",&n);
printf("fibonacci series %d %d",first,second); 
for(int i=3;i<=n;i++){
next=first+second;
printf("%d", next);
first=second;
second=next;
} 
printf("\n");
return 0;
}
