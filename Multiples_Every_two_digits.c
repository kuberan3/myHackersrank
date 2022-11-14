//Multiples every two24 digits
#include<stdio.h>
void main()
{
	int n,d,i,j,temp;
	printf("Enter n: ");scanf("%d",&n);
	printf("Enter d: ");scanf("%d",&d);
	int a[20];
	temp=n;
	i=0;
	while(temp)
	{
		a[i]=temp%10;
		temp=temp/10;
		i++;
	}
	
	for(j=0;j<i;j=j+2)
	{
		if((a[j]+a[j+1])%d!=0)
		{
			break;
		}
	}
	if(j<i)
		printf("NO");
	else
		printf("YES");
}

