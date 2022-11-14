#include<stdio.h>
void main()
{
	int n,*a,k,i,count=0;
	printf("Enter size: ");scanf("%d",&n);
	printf("Enter K: ");scanf("%d",&k);
	a=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	for(i=0;i<n;i++)
	{
		if(*(a+i)>=k)
		{
			count++;
		}
	}
	if(count==n)
		printf("YES");
	else 
		printf("NO");
}
