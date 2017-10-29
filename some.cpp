#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <set>

using namespace std;

int main()
{
	int arr[100];
	int test;

	cin >> test;
	for (int i = 0; i <test ; ++i)
	{
			cin >> arr[i];
	}
	int count =0;
	int max=0;
	int var;
	for (int i = 0; i < test; ++i)
	{
		for (int j = 0; j < test; ++j)
		{
			if (arr[i] == arr[j])
			{
				count++;	
			}
		}
		if (count > max)
		{
			max = count;
			var = arr[i];

		}
		count=0;
	}
	if(max >= test/2)
		cout << var << endl;


}	
