#include<stdio.h>
void main()
{
	int i,n,temp,rem,mul;
	printf("enter value for n:");
	scanf("%d",&n);
	temp=n;
	for(i=1;i<=n/(temp%10);i++)
	{
		rem=temp%10;
		mul=rem*i;
		printf("%d ",mul);
	}
}
