//maximum-first,last,middle
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
		if(a[0]>a[n/2])
		{
			if(a[0]>a[n-1])
				printf("%d",a[0]);
			else
				printf("%d",a[n-1]);
		}
		else
		{
			if(a[n/2]>a[n-1])
				printf("%d",a[n/2]);
			else		
				printf("%d",a[n-1]);
	}
}
