#include <bits/stdc++.h>


using namespace std;
int main()
{
	int input =0;

	cout<< "Enter the amount please:"<<endl;
	int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0;
	cin>>input;

	while(input>5)
	{
		if (input >=1000 )
		{
			c1 = input/1000;
			input = input%1000;
		}
		else if(input>= 500 )
		{
			c2 = input/500;
			input = input%500;	
		}
		else if(input >= 100 )
		{
			c3 = input/100;
			input = input%100;
		}
		else if(input>=50 )
		{
			c7 = input/50;
			input=input%50;
		}
		else if(input>= 20)
		{
			c4 = input/20;
			input = input%20;
		}
		else if(input >= 10 )
		{
			c5 = input/10;
			input = input%10;
		}
		else
		{
			c6 = input/5; 
			input = input%5;
		}

	}

	cout << "1000 Rupees notes: " << c1 << endl;
	cout << "500 Rupees notes: " << c2 << endl;
	cout << "100 Rupees notes: " << c3 << endl;
	//cout << "1000 Rupees notes: " << c1 << endl;
	cout << "50 Rupees notes: " << c7<< endl;
	cout << "20 Rupees notes: " << c4 << endl;
	cout << "10 Rupees notes: " << c5 << endl;
	cout << "5 Rupees notes: " << c6<< endl;
}