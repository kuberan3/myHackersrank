#include<stdio.h>
void main()
{
	int i,n,k,count=0;
	scanf("%d%d",&n,&k);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>=k)
			count++;
		else
			break;
	}
	if(count==n)
		printf("yes");
	else
		printf("no");
}
