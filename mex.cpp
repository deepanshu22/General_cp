#include <bits/stdc++.h>
using namespace  std;

int main()
{
	int test;
	long long int N,K;

	cin >> test;

	while(test--)
	{
		std::vector<long long int> v;
		cin >> N;
		cin >> K;

		for (int i = 0; i < N; ++i)
		{
			long long int a;
			cin>>a;
			v.push_back(a);
		}
		long long int count = 0;
		if(K==0)
		{
			int t=0;
			while(t==0)
			{	
				long long int count_rem=count;
				for (int i = 0; i < N; ++i)
				{
					if(v[i] == count)
					{
						count++;
					}
				}

				if(count==count_rem)
				{
					break;
					t=1;
				}

			}

			cout<<count<<endl;
		}
		else
		{
			
		}
	}
}