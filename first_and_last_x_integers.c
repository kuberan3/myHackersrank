#include<stdio.h>
void main()
{
	int i,j,x,count,n;
	printf("Enter n,x:");
	scanf("%d%d",&n,&x);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<x;i++)
	{
		count=0;
		for(j=n-1;j>=n-x;j--)
		{
			if(a[i]==a[j])
				break;
			count++;
		}
	}
	if(count==x)
		printf("NO");
	else
		printf("YES");
}
