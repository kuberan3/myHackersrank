// NCR using function
#include<stdio.h>
int Factorial(int);
void main()
{
	int x,y,z,n,r;
	printf("Enter value for n and r:");
	scanf("%d%d",&n,&r);
	x=Factorial(n);
	y=Factorial(n-r);
	z=Factorial(r);
	printf("%d",x/(y*z));
}
int Factorial(int m)
{
	int fact=1,i;
	for(i=1;i<=m;i++)
	{
		fact=fact*i;
	}
	return fact;
}
