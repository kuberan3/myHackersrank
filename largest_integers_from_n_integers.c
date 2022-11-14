//Largest integer from n integers
#include<stdio.h>
void main()
{
	int n,i,temp,j,sum,max;
	printf("Enter n:");
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		temp=a[n-1];
		for(j=n-2;j>=0;j--)
			a[j+1]=a[j];
		a[0]=temp;
		sum=0;
		for(j=0;j<n;j++)
		{
			sum=sum*10+a[j];
		}
		b[i]=sum;
	}
	max=b[04];
	for(i=1;i<n;i++)
	{
		if(b[i]>max)
			max=b[i];
	}
	printf("%d",max);
}
