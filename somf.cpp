#include <stdio.h>
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
	int test;
	cin >> test;
	//int new_test=test;
	for (int i = 1; i <= test; i++)
	{
		int new_test=test;
		if(i>1)
		
		{
			for (int k = i ; k > 1 ; k--)
			{
				cout << new_test-(k-1);
			}
		}
		

		for (int j = 1; j <= test-(i-1); j++)
		{	
			cout << new_test;
		}

		printf("\n");
	}
}