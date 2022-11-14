//every two integer unique
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
	for(i=0;i<n-1;i=i+2)
	{
		if(a[i]==a[i+1])
		{
			break;
		}
	}
	if(i<n-1)
		printf("NO");
	else
		printf("YES");
}
