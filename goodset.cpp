#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>


using namespace std;

int main()
{
	int test;
	scanf("%d",&test);
	
	while(test--)
	{
		int a;
		scanf("%d",&a);
		std::vector<int> v;
		if(a == 1)
		{
			printf("7\n");
		}
		else if(a == 2)
		{
			printf("1 2 \n");
		}
		else
		{	
			
			/*for(int i = 3 ; i <= a;i++ )
			{
				
				for(int j = 3 ; j <= a;j++)
				{
					int randno = rand()%(499 + 1) + 1;

					if(v[i]+v[j]!=randno)
					{
						v.push_back(randno);
					}
					else
					{
						randno = rand()%(500-1 + 1) + min;
						v.push_back(randno);
					}
				}
				*/
				int first = 500; 
				for(int i = 0 ; i < a ;i++ )
				{
					v.push_back(first);
					first--;
				
				}

				for(int i =0; i < a;i++)
				{
					printf("%d ",v[i]);
				}
				printf("\n"); 	
				
			
		}

	}
}

