//forward and reverse order in an array
#include<stdio.h>
void main()
{
	int i,n;
	printf("enter n:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
			printf("%d ",a[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		if(a[i]%2!=0)
			printf("%d ",a[i]);
	}
}
