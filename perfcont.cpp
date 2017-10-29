#include <bits/stdc++.h>
using namespace  std;

int main()
{
	int test=0;
	long long int N,P;
	cin>>test;	
	while(test--)
	{
	   std::vector<long long int> v;
	   cin>>N;
	   cin>>P;
	   for (long long int i = 0; i < N; ++i)
	   {
	   		long long int a;
	   		cin>>a;
	   		v.push_back(a);
	   }
	   long long int sum_cake=0,sum_hard=0;
	   for (long long int i = 0; i < N; ++i)
	   {
	   		if(P/2 <=v[i] )
	   		{
	   			++sum_cake;
	   		}
	   		if(P/10 >= v[i])
	   		{	
	   			++sum_hard;
	   		}
	   }

	   if(sum_cake == 1 && sum_hard ==2)
	   {
	   		cout<<"yes"<<endl;
	   }
	   else
	   	cout << "no"<<endl;
	}
}