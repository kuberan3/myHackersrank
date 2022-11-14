//discount
#include<stdio.h>
void main()
{
	int x,y,z,discount,amount;
	printf("enter the value for x,y,z:");
	scanf("%d%d%d",&x,&y,&z);
	if(x==y)
	{
		discount=((x+y)-(x+y)/10)+z;
		printf("discount amount:%d",discount);
	}
	else if(y==z)
	{
		discount=((y+z)-(y+z)/10)+x;
		printf("discount is %d",discount);
	}
	else if(z==x)
	{
		discount=((z+x)-(z+x)/10)+y;
		printf("discount is %d",discount);
	}
	else
	{
		amount=x+y+z;
		printf("amount is %d",amount);
	}
}
