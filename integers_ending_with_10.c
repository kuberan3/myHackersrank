//integer endimg with 10
#include<stdio.h>
void main()
{ 
	int i,n,flag=0;
	printf("enter n:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%100==10)
		{
			printf("%d ",a[i]);
			flag=1;
		}
	}
	if(flag==0)
	{
		printf("-1");
	}
}
