#include<stdio.h>
void main()
{
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]<a[i+1])
			printf("no");
			break;
	}
		if(i==n-1)
	    	printf("yes");
	    
}
