#include <bits/stdc++.h>
//#include <boost/functional/hash.hpp>

using namespace std;

void checker(char p[],char q[])
{
	/*
	std::vector<char> v1,v2;
	int count=0;
	
	//unordered_map<char,int> umap1;
	//unordered_map<char,int> umap2;
	unordered_set<char> s1;
	unordered_set<char> s2;

	for (int i = 0; i < strlen(p); ++i)
	{
		s1.insert(p[i]);
	}

	for (int i = 0; i < strlen(q); ++i)
	{
		s2.insert(q[i]);
	}

	 unordered_set<char>:: iterator i;
    for (i = s1.begin(); i != s1.end(); i++)
        ++count;
    int countq=0;
    for (i = s2.begin(); i != s2.end(); i++)
        ++countq;
    

	

	//cout << count <<" "<< countq<< endl	;
	if(count==countq)
	{
		cout<< "YES" << endl;
	}
	else
		cout << "NO" << endl;
	*/
	//boost::hash<std::string> string_hash;
	//cout << std::hash<std::string>()("aab")<<endl;
	//cout << std::hash<std::string>()("bba")<<endl;
	//cout << string_hash(p) << " " << string_hash(q);
	int h = 37;
	int A = 54059;
	int B=  76963 ;
	while(*p)
	{
		h  = (h*A)^(p[0]*B);
		p++;
	}
	cout << h;	

}

int main()
{
	int test=0;
	char q[1002],p[1002];
	cin >> test;
	while(test--)
	{
		cin >> p >> q;
		checker(p,q);
		// cout << p[0] << " " << q[0] << endl;
	}
}