#include<stdio.h>
void main()
{
	int n,ten,bten,five,bfive,two,btwo;
	printf("enter value for n:");
	scanf("%d",&n);
	ten=n/10;
	bten=n%10;
	five=bten/5;
	bfive=bten%5;
	two=bfive/2; 
	btwo=bfive%2;
	if(ten!=0)
	{
		printf("\n%d 10rs coin",ten);
	}
	if(five!=0)
	{
		printf("\n%d 5rs coin",five);
	}
	if(two!=0)
	{
		printf("\n%d 2rs coins",two);
	}
	if(btwo!=0)
	{
		printf("\n%d 1rs coins",btwo);
	}
}
