//Maximum positive integer
#include<stdio.h>
void main()
{
	int x,y,z,i,flag=0;
	printf("Enter x,y,z: ");
	scanf("%d%d%d",&x,&y,&z);
	if(x<y)
	{
		for(i=1;i<x;i++)
		{
			if(i%z==0)
			{
				printf("%d",i);
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			for(i=y+1;;i++)
			{
				if(i%z==0)
				{
					printf("%d",i);
					break;
				}
			}
		}
	}
}
