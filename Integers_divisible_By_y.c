//Integers divisible by y and having x number of digits
#include<stdio.h>
void main()
{
	int n,x,y,i,temp,count,flag=0;
	printf("Enter n:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter x and y:");
	scanf("%d%d",&x,&y);
	for(i=0;i<n;i++)
	{
		temp=a[i];count=0;
		while(temp)
		{
			count++;
			temp=temp/10;
		}
		if(count==x && a[i]%y==0)
		{
			flag=1;
			printf("%d ",a[i]);
		}
	}
	if(flag==0)
		printf("-1");
}
