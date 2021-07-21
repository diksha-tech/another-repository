#include<stdio.h>
int main()
{
	int n,f[100],j=0,i;
	printf("Enter any number: ");
	scanf("%d",&n);
	int isprime=1;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
		f[j]=i;
		j++;
		isprime=0;
		}
	}
	if(isprime)
	printf("\nPrime number!");
	else
	{
		printf("\nNon prime");
		printf("\nits factors are: ");
		for(int z=0;z<j;z++)
		printf("%d ",f[z]);
	}
	return 0;
}
