#include <bits/stdc++.h>

using namespace std;

unsigned long long int calc(unsigned long long int n,unsigned long long int p,unsigned long long int m)
{
	if(p==0)
		return 1;
	unsigned long long int nm = n%m;

	unsigned long long int r = calc(nm,p/2,m);
	r = (r*r)%m;

	if(p%2==0)
		return r;

	return (r*nm)%m; 
	
}	

unsigned long long int loopi(unsigned long long int n,unsigned long long int m)
{
	unsigned long long int sum=0;
	if(n > 0)
	{
		sum=sum+1;	
		for (unsigned long long int  i = 1 ;i <=n; ++i)
		{
			sum = (sum+calc(i,i,m))%m;
		}
		return sum;
	}
}
int main()
{
	int test;
	unsigned long long int n,m,res;
	cin >> test;
	while(test--)
	{
		cin >> n >> m;
		res = loopi(n,m);
		cout << res << endl;
	} 
}