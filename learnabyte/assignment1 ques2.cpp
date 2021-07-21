#include<stdio.h>
int main()
{
	int a[100],n,temp;
	printf("How much number you want to enter: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("Ascending sequence is: ");
	for(int j=0;j<n;j++)
	printf("%d, ",a[j]);
	
}
