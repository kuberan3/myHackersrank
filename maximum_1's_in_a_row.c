//Maximum 1's in a row
#include<stdio.h>
void main()
{
	int r,c,i,j,c1,c2;
	printf("Enter r and c: ");
	scanf("%d%d",&r,&c);
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	}
	c2=0;
	for(i=0;i<r;i++)
	{
		c1=0;
		for(j=0;j<c;j++)
		{
			if(a[i][j]==1)
				c1++;
		}
		if(c1>c2)
			c2=c1;
	}
	printf("\n%d",c2);
}
