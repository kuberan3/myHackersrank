//common factors of x and y
#include<stdio.h>
void main()
{
	int x,y,max,i;
	scanf("%d %d",&x,&y);
	for(i=1;i<=y/2;i++)
	{
		if(x%i==0 && y%i==0)
		{
			printf("%d ",i);
		} 
	}
}
