#include<stdio.h>
void main()
{
	int i,x,n,rem,temp;
	printf("enter n,x:");
	scanf("%d%d",&n,&x);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		temp=x;
		while(temp)
		{
			rem=temp%10;
			if(rem==a[i])
				break;
			temp=temp/10;
		}
	}
		if(temp==0)
			printf("NO");
		else
			printf("YES");
}
