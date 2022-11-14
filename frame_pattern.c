#include<stdio.h>
void main()
{
	int i,j,m,n,k,l;
	scanf("%d%d",&m,&n);
	int a[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(k=1;k<=n+2;k++)
	{
		printf("*");
	}
	printf("\n");
	for(i=0;i<m;i++)
	{
		printf("*");
		for(j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("*");
		printf("\n");
	}
	for(l=1;l<=n+2;l++)
	{
		printf("*");
	}
}
