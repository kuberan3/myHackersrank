//addition or subtraction with x
#include<stdio.h>
void main()
{
	int i,n,x;
	printf("enter n:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
    }
    printf("enter x:");
    scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
			a[i]=a[i]+x;
		else
			a[i]=a[i]-x;
		printf("%d ",a[i]);
	}
}
