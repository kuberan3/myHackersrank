//count vowels in the file
#include<stdio.h>
void main()
{
	FILE *fp;
	char a[50],b;
	int count=0;
	fp=fopen("sample.txt","w");
	printf("Write content:\n");
	gets(a);
	fprintf(fp,"%s",a);
	fclose(fp);
	fp=fopen("sample.txt","r");
	b=getc(fp);
	printf("\nContent already in the file:");
	while(b!=EOF)
	{
		printf("%c",b);
		if(b=='a'||b=='e'||b=='i'||b=='o'||b=='u'||b=='A'||b=='E'||b=='I'||b=='O'||b=='U')
			count++;
		b=getc(fp);	
	}
	fclose(fp);	
	printf("\n%d vowels are present in the file content.",count);
}
