#include <stdio.h>
#include <iostream>
#include <string>


using namespace std;

int main()
{

	int num;
	int even=0,odd=0;
	int digit;
	printf("enter the number ?\n"); 
	scanf("%d",&num);

	while(num > 0)
	{
		digit=num%10;
		num=num/10;
		//printf("%d\n",digit);
		//printf("%d\n",num);
		if(digit%2==0)
		{
			even+=digit;
		}
		else
		{
			odd+=digit;
		}

	}

	printf("sum of even is %d and odd is %d\n",even,odd);
}
