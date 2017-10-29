#include <bits/stdc++.h>

using namespace std;

void poscalculator(long long int a)
{
	long long int x=0,y=0;
	if(a == 0)
	{
		cout << 0 <<" "<< 0<< endl;
		return;
	}
	else
	{
		while(a>0)
		{
			if (a > 0)
			{
				x=x+1;
				a=a-1;
			}
			if (a > 0)
			{
				y=y+1;
				a=a-1;
			}
			if (a > 0)
			{
				y=y+1;
				a=a-1;
			}
		}
		cout << x <<" "<< y << endl;
	}
}

int main()
{
	int test;

	long long int m;
	cin >> test;

	while(test--)
	{
		cin >> m;
		poscalculator(m);
	}
}