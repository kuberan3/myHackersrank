//divide unit digit
#include<stdio.h>
void main()
{
	int i,n,unitdigit;
	printf("enter n:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		unitdigit=a[i]%10;
		if(unitdigit==0)
			printf("%.2f ",(float)a[i]);
		else
		{
			a[i]=(float)a[i]/unitdigit;
			printf("%.2f ",(float)a[i]);
		}
	}
}
