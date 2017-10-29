#include <stdio.h>
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <vector>
#include <math.h>
using namespace std;

long long int reverse(long long int a)
{	
	int c;
	int count=0; 
	std::vector<long long int> v;	
	while(a > 9)
		{
			c=a%10;
			v.push_back(c);
			a=a/10;
			count++;
		}
		v.push_back(a);
		long long int sum=0;
		long long int j=0;
		for (int i = count; i > 0; --i)
		{	
			v[j]*=pow(10,i);
			sum+=v[j];
			j++;
			
		}
		//cout<< sum+a << endl;

		return sum+a;
}

int main()
{
	
	int test;

	cin >> test;

	while(test--)
	{
		long long int a ,b ;
		cin >> a >> b;
		long long int rev_a;
		long long int rev_b;
		if( a > 9 )
		{
			rev_a=reverse(a);
			
		}
		else
		{
			rev_a=a;
		}

		if (b>9)
		{
			rev_b = reverse(b);
		}
		else
		{
			rev_b =b;
		}

		long long int final_sum= rev_b + rev_a;
		//cout << final_sum << endl;
		 final_sum = reverse(final_sum);

		cout << final_sum << endl;
	

	}

	return 0;

}