#include<stdio.h>
int main()
{
	int n,choice,a=0,b=0,c=0,d=0;
	printf("How many voters can cast their votes: ");
	scanf("%d",&n);
	while(n!=0)
	{
		printf("\n1.Press 1 to Vote For AAA \n2.Press 2 for BBB \n3.Press 3 for CCC \n4.Press 4 for NOTA: ");
		scanf("%d",&choice);
		if(choice==1)
		{
			a++;
		}
		else if(choice==2)
		{
			b++;
		}
		else if(choice==3)
		{
			c++;
		}
		else if(choice==4)
		{
			d++;
		}
		else
		{
			printf("Wrong Choice!");
		}
		n=n-1;
	}
	
	if(a>b && a>c && a>d)
	{
		printf("AAA WON!!");
	}
	else if(b>a && b>c && b>d)
	{
		printf("BBB WON!!");
	}
	else if(c>a && c>b && c>d)
	{
		printf("CCC WON!!");
	}
	else if(d>a && d>b && d>c)
	{
		printf("NOTA WON!!");
	}
	
	return 0;
}
