//equal sum even and odd digits
/*sum the even and odd digits separately in a whole number, if both sums are equal then print that whole number*/
#include<stdio.h>
void main()
{
	int i,n,temp,sumodd,sumeven;
	printf("Enter n:");
	scanf("%d",&n);
	if(n>=112)
	{
		for(i=112;i<=n;i++)
		{
			temp=i;
			sumodd=0;sumeven=0;
			while(temp)
			{
				if((temp%10)%2==0)
					sumeven=sumeven+(temp%10);
				else
					sumodd=sumodd+(temp%10);
				temp=temp/10;
			}
			if(sumodd==sumeven)
			{
				printf("%d ",i);
			}
		}
	}
}
