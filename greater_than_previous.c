//greater than previous
#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter n:");
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d ",a[0]);
	for(i=1;i<n;i++)
	{
		if(a[i]>a[i-1])
			printf("%d ",a[i]);
	}
}
