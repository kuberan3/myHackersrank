//fibonacci series
#include<stdio.h>
void main()
{
	int a=-1,b=1,n,i,c;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		c=a+b;
		printf("%d ",c);
		a=b;b=c;
	}
}
