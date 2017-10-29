#include <bits/stdc++.h>
#include <queue>
using namespace std;

int main()
{
	queue <int> g,g2;

	g.push(10);
	g.push(20);
	g.push(30);
	g.push(40);
	
	int sz =  g.size();
	for (int i = 0; i < sz; ++i)
	{
		int a = g.front();
		g2.push(a);
		g.pop();
		g.push(a);
		//cout << g.back() << endl;

	}
	//swap(g,g2);

	int count = 0;
	int j = sz-1;
	while(count < sz)
	{
		for (int i = 0; i < j; ++i)
		{
			g.pop();
		}
		int b = g.front();
		//cout << b << endl;
		g2.push(b);
		count = count+1;
		j=j-1;
		
		while(!g.empty())
		{
			//cout<< g2.front() << " yeh hai g2"<<endl;
		 	g.pop();
		}
		//cp_sz--;
		int temp_sz = g2.size();
		for (int i = 0; i < temp_sz; ++i)
		{
			int a = g2.front();
			g.push(a);
			g2.pop();
			g2.push(a);
			//cout << g.back() << endl;

		}
	}
	int flag = 0;
	while(flag < sz)
	{
		//cout<< g2.front() << " yeh hai g2"<<endl;
		 g2.pop();
		 flag++;
	}
	while(!g2.empty())
		{
			cout<< g2.front() << " yeh hai g2"<<endl;
		 	g2.pop();
		}

}