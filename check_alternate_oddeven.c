#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter n:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		if((a[i]%2==0 && a[i+1]%2==0)||(a[i]%2!=0 && a[i+1]%2!=0))
			break;
	}
	if(i<n-1)
		printf("No");
	else
		printf("Yes");
}
