//Diagonals in North-East Direction
#include<stdio.h>
void main()
{
	int r,c,i,j,k;
	printf("Enter row and column:");
	scanf("%d%d",&r,&c);
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	}
	for(j=0;j<r;j++)
	{   
		for(k=0;k<=j;k++)
			printf("%d ",a[j-k][k]);
		printf("\n");
	}
	for(j=r-1;j<=r;j++)
	{
		if(j<r)
		{
			for(k=0;k<j;k++)
			{
				printf("%d ",a[j-k][k+1]);
			}
			printf("\n");
		}
		else
		{
			for(k=1;k<j-1;k++)
			{
				printf("%d ",a[j-k][k+1]);
			}
			printf("\n");
		}
	}
}
