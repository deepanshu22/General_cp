#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int u,v,x;
	int test;
	cin >> test;

	while(test--)
	{
	cin >> u >> v >> x;

	//double res = (double) u+v;
	//double final = (double) x/res;
	double res = (u+v)*1e-9;
	double final = (x/res)*1e-9;
	//printf("%g\n",final);
	cout << setprecision (10) << fixed << final<< endl;
	}
}