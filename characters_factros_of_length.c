//characters factros of length
#include<stdio.h>
int findLength(char s[])
{
	int i,count=0;
	for(i=0;s[i]!='\0';i++)
		count++;
	return count;
}
void main()
{
	int i,n;
	char a[20];
	printf("Enter string:");
	gets(a);
	n=findLength(a);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%c",a[i-1]);
		}
	}
}
