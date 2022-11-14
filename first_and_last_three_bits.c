//First and Last three bits
#include<stdio.h>
#include<math.h>
void main()
{
	int n,i,j,temp,sum;
	printf("Enter n:");
	scanf("%d",&n);
	int a[20];
	temp=n;i=0;
	while(temp)
	{
		a[i]=temp%2;
		temp=temp/2;
		i++;
	}
	sum=0;
	for(j=i-3;j<i;j++)
	{
		sum=sum+(a[j])*((int)pow(2,(j+3)-i));   
	}
	printf("%d ",sum);
	sum=0;
	for(j=0;j<3;j++)
	{
		sum=sum+(a[j]*((int)pow(2,j)));
	}
	printf("%d",sum);
}
