#include<stdio.h>
void main()
{
	int i,n,count1=0,count2=0,tenthdigit;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",a[i]);
	for(i=0;i<n;i++)
	{
	tenthdigit=0;
	tenthdigit=(a[i]/10)%10;
	if(tenthdigit%2!=0)
	count1++;
	else
	count2++;
    }
	if(count1<count2)
	{
		for(i=0;i<n;i++)
		{
			tenthdigit=(a[i]/10)%10;
			if(tenthdigit%2!=0)
	        printf("%d",a[i]);
	    }
	}
	else if(count2<count1)
	{
		for(i=0;i<n;i++)
		{
		tenthdigit=(a[i]/10)%10;
		if(tenthdigit%2==0)
	    printf("%d",a[i]);
	    }
	}
	else
     	printf("-1");
}
