#include<stdio.h>
int main()
{
	char c[100];
	int i,j;
	printf("Enter a string: ");
	fgets(c,sizeof(c),stdin);
	for(i=0 ; c[i]!='\0' ; i++)
	{
		while(!(c[i]>='a' && c[i]<='z') && !(c[i]>='A' && c[i]<='Z') && !(c[i]=='\0'))
		{
		
		for(j=i ; c[j]!='\0' ;j++ )
		{
			c[j]=c[j+1];
			
		}
		c[j]='\0';
	    }
	}
	printf("Output: ");
	puts(c);
	return 0;
}
