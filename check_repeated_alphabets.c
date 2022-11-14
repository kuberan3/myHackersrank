//check repeated alphabets
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
	int n,i;
	char a[20];
	printf("Enter string:");
	gets(a);
	n=findLength(a);
	for(i=0;i<n-2;i++)
	{
		if(a[i]==a[i+1] && a[i]==a[i+2])
			break;
	}
	if(i<n-2)
		printf("Invalid");
	else
		printf("valid");
}
