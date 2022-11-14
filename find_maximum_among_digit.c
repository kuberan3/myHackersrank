//find maximum of a digit
#include<stdio.h>
void main()
{
	int n,temp,rem,max,max14;
	printf("enter n:");
	scanf("%d",&n);
	temp=n;
	while(temp)
	{
		rem=temp%10;
		if(rem%2==0)
		{
			max=rem;
			max1=max;
			if(max1>max)
			{	
				printf("%d is max",max);
			}	
		}
		temp=temp/10;
	}
}
