#include<stdio.h>
void main()
{
	int i,j,k,n,temp,a[10];
	scanf("%d",&n);
	temp=n;
	while(temp)
	{
		a[i]=temp%10;
		temp=temp/10;
		i++;
	}
	for(j=i-1;j>=0;j--)
	{
		for(k=1;k<=a[j];k++)
		{
			printf("%d",a[j]);
		}
	}
}
