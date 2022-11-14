#include<stdio.h>
void main()
{
	int n,rs5,rs2,rs1;
	scanf("%d",&n);
	rs5=n/5;
	rs2=(n%5)/2;
	rs1=((n%5)%2)/1;
	printf("5rs coins is %d",rs5);
	printf("2rs coins is %d",rs2);
	printf("1rs coins is %d",rs1);
}
