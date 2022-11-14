//find n from its factors
#include<stdio.h>
void main()
{
	int i,j,max,n;
	printf("Enter n:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	for(i=max;;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i%a[j]!=0)
				break;
		}
		if(j>=n)
		{
			printf("%d",i);
			break;
		}
	}
}
