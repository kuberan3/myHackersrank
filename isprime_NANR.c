#include<stdio.h>
void isPrime()
{
	int count,i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
			count++;
	}
	if(count==2)
		printf("%d is prime",n);
	else
		printf("%d is not prime",n);
}
void main()
{
	isPrime();
}

