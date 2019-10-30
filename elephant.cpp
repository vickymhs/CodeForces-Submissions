#include<iostream>

using namespace std;

int main()
{
	long long int x,c=0,k;
	cin>>x;
	while(x>0)
	{
		if(x>=5)
		{
			x=x-5;
			c++;
		}
		else
		{
			k=x%5;
			x=x-k;
			c++;
		}
	}
	
	cout<<c;
	
}
