//positive or negative 
#include<stdio.h>
void main()
{
	int num;
	printf("Enter the value for num:");
	scanf("%d",&num);
	if(num%2==0)
		printf("%d is even number",num);
	else
		printf("%d is odd number",num);
}
