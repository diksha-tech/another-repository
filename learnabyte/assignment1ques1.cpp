#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	printf("Enter any string: ");
	gets(s);
	printf("\nEntered string is: ");
	puts(s);
	int i,j;
	for(i=0;s[i]!='\0';i++)
	{
		while(!((s[i]>= 'a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || s[i]=='\0'))
			{
				for(j=i;s[j]!='\0';j++)
				{
					s[j]=s[j+1];
				}
			
				s[j]='\0';
			}
	}
	printf("\nEdited string is: ");
	puts(s);
	return 0;
}
