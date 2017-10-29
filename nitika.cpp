#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <set>

using namespace std;

void str_changer(string &arr)
{			
		std::vector<char> v;
		char a = '.';
		char s = ' ';
		int pos=0;
		int count=0,check=0;

		for (int i = 0; i < arr.length(); ++i)
		{
			if (arr[i] == 32)
			{
				count ++;
			}
		}
		//cout << count << endl;
		check = 0;
		if(count > 0)
		{	
			check ++;
			if (arr[0] > 90)
			{
				arr[0] = arr[0]-32;
				v.push_back(arr[0]);
				v.push_back(a);
				v.push_back(s);
			}
			else
			{
				v.push_back(arr[0]);
				v.push_back(a);
				v.push_back(s);
			}

			for (int i = 1; i < arr.length(); ++i)
			{
				if (arr[i-1] == 32 )
				{	
					pos=i;
					if (count > 1)
					{

						if (arr[i] >=90)
						{	
							arr[i] = arr[i]-32;
							v.push_back(arr[i]);
							v.push_back(a);
							v.push_back(s);
							count--;
						}
						else
						{
							v.push_back(arr[i]);
							v.push_back(a);
							v.push_back(s);
							count--;	
						}
						//cout << "idhar yaha"<<endl;
					}
					else 
					{	
						if (arr[pos] > 90)
						{
							arr[pos] = arr[pos]-32;
							v.push_back(arr[pos]);
						}
						else
						{
							v.push_back(arr[pos]);	
						}
						for (int j = pos+1; j < arr.length(); ++j)
						{
							if (arr[j] >= 65 && arr[j] <= 90)
							{	
								v.push_back(arr[j]+32);
							}
							else
							{
								v.push_back(arr[j]);
							}
						}
					}
					
				}

					
			}
		}
		else
		{
			if (arr[0] > 90)
			{
				arr[0] = arr[0]-32;
				v.push_back(arr[0]);
			}
			else
			{
				v.push_back(arr[0]);
			}
			for (int i = 1; i < arr.length(); ++i)
			{
				if(arr[i] >= 65 && arr[i] <= 90)
				{		
					arr[i] = arr[i]+32;
	//space = 32
				}	
			}
		}
		if (check > 0)
		{
			/* code */
			for (int i = 0; i < v.size(); ++i)
				{
					cout << v[i];
				}
				printf("\n");
		}
		else
		{
			cout << arr << endl;
		}
		//cout << count << "now"<<endl;
}
int main()
{
	int test;
	//scanf("%d",&test);
	cin >> test;
	cin.ignore(256,'\n');
	while(test--)
	{	
		string str1;
		getline(cin,str1);
		str_changer(str1);
		//cout << str1 << endl;



	}
	
}