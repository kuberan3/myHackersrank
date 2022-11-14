//character between hash
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
	int n,i,j,k;
	char a[30];
	printf("Enter String:");
	gets(a);
	n=findLength(a);
	for(i=0;i<n; )
	{
		if(a[i]=='#')
		{
			for(j=i+1;j<n;j++)
			{
				if(a[j]=='#')
					break;
			}
			if(j<n)
			{
				for(k=i+1;k<j;k++)
				{
					printf("%c",a[k]);
				}
			}
			i=j;
		}
		else
		{
			i++;
		}
	}
}

