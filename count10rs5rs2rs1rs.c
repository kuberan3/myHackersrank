#include<stdio.h>
void main()
{
	int n;
	printf("enter value for n:");
	scanf("%d",&n);
	if(n%10==0)
	{
		printf("count of 10rs coins is %d",n/10);
	}
	if(n%10!=0 && (n%10)%5==0)
	{
		printf("count of 10rs coins is %d",n/10);
		printf("\ncount of 5rs coins is %d",(n%10)/5);
	}
	if(n%10!=0 && (n%10)%5!=0 && ((n%10)%5)%2==0)
	{
		printf("count of 10rs coins is %d",n/10);
		printf("\ncount of 5rs coins is %d",(n%10)/5);
		printf("\ncount of 2rs coins is %d",((n%10)%5)/2);
	}
	if(n%10!=0 && (n%10)%5!=0 && ((n%10)%5)%2!=0)
	{
		printf("count of 10rs coins is %d",n/10);
		printf("\ncount of 5rs coins is %d",(n%10)/5);
		printf("\ncount of 2rs coins is %d",((n%10)%5)/2);
		printf("\ncount of 1rs coins is %d",((n%10)%5)%2);
	}
}

