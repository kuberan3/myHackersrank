#include<stdio.h>
void main()
{
	int i,n,mul,flag=0;
	printf("enter n:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		mul=a[i]*2;
		if(mul%10==2)
		{
			continue;
			flag=1;
		}
		printf("%d ",mul);
	}
	if(flag==0)
		printf("-1");
}
