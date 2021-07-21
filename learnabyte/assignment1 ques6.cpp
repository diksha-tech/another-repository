#include<stdio.h>
int main()
{
	int i,isprime,m,n,j;
	printf("enter a range: ");
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		isprime=1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				isprime=0;
				break;
			}
		}
		if(isprime==1)
		{
			printf("%d, ",i);
		}
	}
	return 0;	
}
