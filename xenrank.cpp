#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <bits/stdc++.h>

using namespace std;


int main()
{
	int test;
	scanf("%d",&test);

// long long int arr[1003][1003];

	while(test--)
	{
		 long long int a,b;
		 cin >> a;
		 cin >> b;

		long long int temp = a+b+1;
		long long int  final = (temp*(temp-1))/2 +1;
		final = final + a;
		cout << final << endl;



	}
	
}