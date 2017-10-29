#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
	int test;
	long long int n,a=0;

	cin >> test;

	while(test--)
	{
		std::vector<long long int > v;

		long long int j=0;
		char temp;
		while(scanf("%lld%c",&a,&temp) != EOF)
		{	
			
			v.push_back(a);
			j++;

			//printf("%d\n",j);
			if (temp == '\n')
			{
				break;
				
			}
		}
		long long int nw = j-1;
		int pos=0;
		int k=0;
		std::vector<long long int> v1;
		for (int i = 0; i < j; ++i)
		{
			if(v[i] == nw)
			{
				pos = i; 
			}
			else
			{
				v1[k] = v[i];
				k++;
			}
		}

		//std::make_heap(v1.begin(),v1.end());
		//std::cout << v.front() << endl;
	}	
}