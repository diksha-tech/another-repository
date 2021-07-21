#include<stdio.h>
int main()
{
	int n,choice,num1,num2,c;
	float a,b,d;
	while(1)
	{
		printf("\n1.Press 1 to add \n2.Press 2 to subtract \n3.Press 3 to multiply \n4.Press 4 to divide \n5.Press 5 to exit ");
		scanf("%d",&choice);
		if(choice==1)
		{
			printf("\n Enter 2 numbers: ");
			scanf("%d%d",&num1,&num2);
			c=num1+num2;
			printf("sum of %d and %d is: %d",num1,num2,c);
		}
		else if(choice==2)
		{
			printf("\n Enter 2 numbers: ");
			scanf("%d%d",&num1,&num2);
			c=num1-num2;;
			printf("difference of %d and %d is: %d",num1,num2,c);
		}
		else if(choice==3)
		{
			printf("\n Enter 2 numbers: ");
			scanf("%d%d",&num1,&num2);
			c=num1*num2;
			printf("multiplication of %d and %d is: %d",num1,num2,c);
		}
		else if(choice==4)
		{
			printf("\n Enter 2 numbers: ");
			scanf("%f%f",&a,&b);
			d=a/b;
			printf("Division of %f and %f is: %f",a,b,d);
		}
		else if(choice==5)
		return 0;
		else
		printf("Invalid choice!");
	}
}		
