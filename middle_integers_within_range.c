//middle integrs within the range
#include<stdio.h>
void main()
{
	int i,n,count=0;
	printf("enter n:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n-1;i++)
	{
		if(a[i]>a[0] && a[i]<a[n-1])
			count++;
	}
	if(count==n-2)
		printf("YES");
	else
		printf("NO");
}
