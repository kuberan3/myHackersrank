#include<stdio.h>
void main()
{
	int i,j,n,temp,rem,tenthdigit,count1=0,count2=0;
	printf("enter the value:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		temp=a[i];
		rem=temp/10;
		tenthdigit=rem%10;
		if(tenthdigit%2==0)
			count1++;
		else
			count2++;
	}
	if(count1>count2)
	{
		for(i=0;i<n;i++)
		{
			temp=a[i];
			rem=temp/10;
			tenthdigit=rem%10;
			if(tenthdigit%2==0)
				printf("%d\t",a[i]);
		}	
	}
	else
	{
		for(i=0;i<n;i++)
		{
			temp=a[i];
			rem=temp/10;
			tenthdigit=rem%10;
			if(tenthdigit%2!=0)
				printf("%d\t",a[i]);
		}
	}
}
