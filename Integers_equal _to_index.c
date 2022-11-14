//Integers equal to index
#include<stdio.h>
void main()
{
	int n,i,flag=0;
	printf("Enter n:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]==i)
		{
			printf("%d ",a[i]);
			flag=1;
		}
	}
	if(flag==0)
		printf("-1");
}
