#include<stdio.h>
void main()
{
	int i=0,n,j,k,temp;
	scanf("%d",n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		a[i]=temp%10;
		i++;
	}
	for(j=i-1;j>=0;j--)
	{
		for(k=1;k<=a[j];k++)
		printf("*");
	}	
}
