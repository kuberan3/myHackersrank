//equal first half and second half string
#include<stdio.h>
int findLength(char s[])
{
	int i,count=0;
	for(i=0;s[i]!='\0';i++)
	{
		count++;
	}
	return count;
}
void main()
{
	int i,n;
	char a[20];
	printf("Enter string:");
	gets(a);
	n=findLength(a);
	if(n%2==0)
	{
		for(i=0;i<n/2;i++)
		{
			if(a[i]!=a[i+(n/2)])
				break;
		}
	}
	else
	{
		for(i=0;i<n/2;i++)
		{
			if(a[i]!=a[i+1+(n/2)])
				break;
		}
	}
	if(i<n/2)
		printf("No");
	else
		printf("Yes");
}
