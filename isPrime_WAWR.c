//with argument with return
#include<stdio.h>
int isPrime(int);
void main()
{
	int n;
	scanf("%d",&n);
	if(isPrime(n)==2)
		printf("%d is prime",n);
	else
		printf("%d is not prime",n);
}
int isPrime(int m)
{
	int i,count=0;
	for(i=1;i<=m;i++)
	{
		if(m%i==0)
			count++;
	}
	return count;
}
