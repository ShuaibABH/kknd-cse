#include<stdio.h>
void main()
{int n,m=1,i;
printf("Enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
	m=m*i;
printf("the factorial is %d",m);
}
