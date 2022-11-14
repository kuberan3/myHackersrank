//drake consonant string
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
	int count,n,i,j;
	char a[20];
	printf("Enter string:");
	gets(a);
	n=findLength(a);
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=i;j<n;j++)
		{
			if(a[j]!='a' && a[j]!='e' && a[j]!='i' && a[j]!='o' && a[j]!='u')
				count++; 
		}
		printf("%d ",count);
	}
}
