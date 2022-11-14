#include<stdio.h>
#include<math.h>
void main()
{
	int n,i,sum=0;
	printf("Enter n: ");
	scanf("%d",&n);
	int a[n];
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
			a[i-1]=1;
		else
			a[i-1]=0;
	}
	for(i=n-1;i>=0;i--)
	{
		sum=sum+(a[i]*((int)pow(2,n-(i+1))));
	}
	printf("%d",sum);
}
