//Exactly k non zero digits
#include<stdio.h>
void main()
{
	int x,y,k,count,flag=0,i,temp;
	printf("Enter x and y:");
	scanf("%d%d",&x,&y);
	printf("Enter k:");
	scanf("%d",&k);
	for(i=x;i<+y;i++)
	{
		temp=i;count=0;
		while(temp)
		{
			if(temp%10!=0)
				count++;
			temp=temp/10;
		}
		if(count==k)
		{
			flag=1;
			printf("%d ",i);
		}
	}
	if(flag==0)
		printf("-1");
}
