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
	long long int ts,tf,t;

	cin >> ts >> tf >> t;
	//cout << ts <<  tf << n;
	long long int n; 
	cin >> n;

	long long int n1 = n;

	std::vector<long long int > v;
	while(n1 > 0)
	{
		long long int a;
		cin  >> a;
		v.push_back(a);
		n1--;
	}

	long long int sum = ts;

	long long int flag = 0 ;

	if (v[0] < ts)
	{
		flag = 1;
	}
	else if(v[0] == ts)
	{
		flag = 2;
	}
	else if (v[0] > ts)
	{
		flag =3;
	}

	//cout << flag;
	long long int pos=0;
	long long int count=0;
	long long int step=0;
	for (long long int i = 0; i < n; ++i)
	{
	 	if(flag ==1 )
	 	{
	// 	 	cout << v[i];
		 	if(v[i] < ts)
		 	{
		 		sum+=t;
		 		count++;
		 		step++;
//		 		cout << sum << endl;
		 		if(count==n || sum > tf)
		 		{
		 			if(v[0] > 1)
		 			{
		 				pos = v[0]-1;
		 				cout << pos << endl;
		 				return 0;
		 			}
		 			else
		 			{
		 				cout << pos << endl;
		 				return 0;
		 			}	
		 		}
		 		else
		 		{
		 			
		 		}				 			}
		    
		    else if(v[i] >= ts)
		    {
		    	sum+=t;
		    	step++;
		    	if (sum >= tf)
		    	{
		    		if (v[0] > 1)
		    		{
		    			pos = v[0]-1;
		 				//cout << pos << endl;
		 				break;
		    		}
		    		else
		    		{
		    			cout << pos << endl;
		    			return 0;
		    		}
		    	}
		    	else
		    	{
		    		if (tf-sum > t)
		    		{
		    			pos = sum;
		    			//cout << pos << endl;
		    			//return 0

		    		}
		    		else
		    		{
		    			for (int i = 0; i < step; ++i)
		    			{
		    				pos=v[0];
		    				if(pos+i != v[i])
		    				{
		    					pos = pos + i;
		    					cout << pos << endl;
		    					return 0;
		    				}
		    			}
		    		}
		    	}

		    }
		}   
	 	else if(flag == 2)
	 	{
		 	
		 		sum += t;
		 		if(sum <= v[i+1])
		 		{	
		 			pos =sum;
		 			//cout << sum << endl;
		 			break;
		 		}
		 		else if(sum > tf)
		 		{
		 			//cout << ts-1<< endl;
		 			//break;
		 			pos= ts-1;
		 		} 
		 	
		}
		else if(flag == 3)
		{
		 	
				pos = sum;		 	
		 		//cout << sum;
		 		//break;
		 	
	 	}
	} 
	 	cout << pos << endl;


}