#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int test;
	cin >> test;
	int count=0;
	int test1=test;
	int test2=test;
	while(test>0)
	{
		//int a = test%10;
		test=test/10;
		count++;
	}
	int fina_sum=0;
	int mul=1;
	//cout << test1;
	while(test1>0)
	{	
		mul=1;
		int digit = test1%10;
		test1 = test1/10;
	//	cout << digit << endl;
		for (int i = 0; i < count; ++i)
		{
			mul*=digit;
	//		printf("%d\n",mul);
		}

		fina_sum+=mul;

	}

	if(fina_sum==test2)
	{
		cout << "Armstrong yes" <<endl;
	}
	else
	{
		cout << "no" <<endl;
	}

//	cout << count << endl;

}