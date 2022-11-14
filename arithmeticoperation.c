//arithmetic operations
#include<stdio.h>
void main()
{
	int a,b,add,sub,mul,div,ch;
	printf("---------------MENU---------------");
	printf("\n1)Addition");
	printf("\n2)Subraction");
	printf("\n3)Multiplication");
	printf("\n4)Division");
	printf("\n5)Exit");
	printf("----------------------------------");
	do
	{
		printf("\nEnter the choice:");
		scanf("%d",&ch);
		switch(ch)
		{
	        case 1:
				printf("enter the value for a and b:");
				scanf("%d%d",&a,&b);
				add=a+b;
				printf("addition of a and b is %d",add);
				break;
			case 2:
				printf("enter the value for a and b:");
				scanf("%d%d",&a,&b);
				sub=a-b;
				printf("subraction of a and b is %d",sub);
				break;
			case 3:
				printf("enter the value for a and b:");
				scanf("%d%d",&a,&b);
				mul=a*b;
				printf("multiplication of a and b is %d",mul);
				break;
			case 4:
				printf("enter the value for a and b:");
				scanf("%d%d",&a,&b);
				div=a/b;
				printf("division of a and b is %d",div);
				break;
			case 5:
				printf("successfully exited...");
				break;
			default:
				printf("!!!!!!!!! Invalid entry !!!!!!!!!");
		}
	}while(ch!=5);
}
