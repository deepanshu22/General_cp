#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		std::vector<long long int> v;
		long long int n;
		cin >> n;

		for (int i = 0; i < n; ++i)
		{	
			long long int a;
			cin >> a;
			v.push_back(a);
		}
		long long int sum = 0;
		//cout << "pehle wala" <<sum << endl;
		sum = v[0] | v[1];
		for (int i = 2; i < n; ++i)
		{
			sum |= v[i];
		}
		cout << sum << endl;
	}

}