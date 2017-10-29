#include <stdio.h>
#include <iostream>
//#include <math.h>
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	
	int count;
	scanf("%d",&n);
	while(n--)
	{
		count=0;
		int sz=0;
		scanf("%d",&sz);
		int sz1 = sz;
		std::vector<int> vec;
		int arr[100005] ;
		int i=1;
		while(sz--)
		{

			int a;
			scanf("%d",&a);
			arr[i]=a;
			i++;
			//vec.push_back(a);

		}
	//	printf("initial count : %d\n",count);
		int flag=0;
		count=0;
		//for(int i=1;i<=sz1;i++)
		//{
		//	printf("%d\n",arr[i]);
		//}
		/*for(int i = 1; i <= sz1 ; i++)
		{
			flag=0;
			for(int j = 1;j<=sz1;j++)
			{	
				
				if(i == arr[j] && flag == 0)
				{
					//printf("%d\n",vec[j]);
					count++;
					flag=1;
				}
			}
			
		}*/
		int max=0;
		for(int i=1;i<=sz1;i++)
		{
			if(arr[i] > max)
			{
				max=arr[i];
			}
		}

		printf("%d\n",sz1-max);
	}

}