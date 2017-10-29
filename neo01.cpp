#include <stdio.h>
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
	int test;
	scanf("%d",&test);

	while(test--)
	{	
		long long int sz;
		cin >> sz;
		std::vector<long long int> v;

		long long int sz1=sz;
		while(sz--)
		{
			long long int a ;
			cin >> a;
			v.push_back(a);
		}

		std::sort(v.begin(),v.end());

		
		long long int sum=0;
		long long int count=0;
		long long int temp[sz1];
		long long int j=0;
		long long int flag=0;
		for(int i =0 ; i<sz1;i++)
		{
			flag++;
			if(v[i]<0)
			{
				sum+=v[i];
				count=-1; 
			}
			else
			{
				count++;
				temp[j]=v[i];
				j++;
			}
			if(count == (-1) || flag == sz1)
			{	
				long long int add=0;
				for(long long int k = 0 ;k < j;k++)
				{
					add+=temp[k];
					//printf("%d\n",temp[k]);
				}
				add = add*j;
				sum+=add;
				j=0;
			}
			
		}
		//for(int i =0;i<sz1;i++)
		//{
		//	sum+=v[i];
		//}

		cout << sum << endl;

	}
}