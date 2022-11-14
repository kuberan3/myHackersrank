//with argument no return
#include<stdio.h>
void isPrime(int);
void main()
{
	int n;
	scanf("%d",&n);
	isPrime(n);
}
void isPrime(int m)
{
	int i,count=0;
	for(i=1;i<=m;i++)
	{
		if(m%i==0)
			count++;
	}
	if(count==2)
		printf("%d is prime",m);
	else
		printf("%d is not prime",m);
}
