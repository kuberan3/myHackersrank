#include<stdio.h>
int isPrime();
int n;
void main()
{
	if(isPrime()==2)
	{
		printf("%d is prime",n);
	}
	else
		printf("%d is not prime",n);
}
int isPrime()
{
	int count,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
			count++;
	}
	return count;
}
