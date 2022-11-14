#include<stdio.h>
void main()
{
	int x,i,y;
	printf("enter vlaue for x and y:");
	scanf("%d%d",&x,&y);
	for(i=1;x,y!=0;i++)
	{
		if(x%i==0 && y%i==0)
		{
			printf("%d ",i);
		}
	}
}
