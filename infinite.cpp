#include<iostream>

using namespace std;

int main()
{
	long long int a,b,c;
	cin>>a>>b>>c;
	 long double n;
	
	if(c==0)
		{
			if(a==b)
			n=1;
			else
			n=0;
		}	
	else
		n=((b-a)/float(c))+1.0;
	
	cout<<n;
	
	if(int(n)==n && n>0)
	cout<<"YES";
	
	else
	cout<<"NO";
}
