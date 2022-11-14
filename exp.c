#include<stdio.h>
void main()
{
	int i=0,j,k,n,a[10],temp=0;
	scanf("%d",&n);
	for(temp=n;temp!=0;temp=temp/10)
	{
		a[i]=temp%10;
		i++;
	}
	for(j=i-1;j>=0;j--)
	{
		for(k=1;k<=a[j];k++)
		printf("%d",a[j]);
	}
}
	

