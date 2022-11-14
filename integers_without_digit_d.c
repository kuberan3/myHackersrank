//integers  without digit D
#include<stdio.h>
void main()
{
	int i,n,d,rem,temp,flag=0;
	printf("enter n,d:");
	scanf("%d%d",&n,&d);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		temp=a[i];
		while(temp)
		{
			rem=temp%10;
			if(rem==d)
				break;
			temp=temp/10;
		}
		if(temp==0)
		{
			printf("%d ",a[i]);
			flag=1;
		}
	}
	if(flag==0)
		printf("-1");
}
