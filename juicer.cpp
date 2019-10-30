#include<iostream>

using namespace std;

int main()
{
	long long int n,b,d,a[100005],i,j,s=0,c=0,flag=0;
	cin>>n>>b>>d;
	
	for(i=0;i<n;i++)
	cin>>a[i];
	
	for(i=0;i<n;i++)
	{
		if(a[i]<=b)
		s=s+a[i];
		if(s>d)
		{
			c++;
			s=0;
		}
	}
	
	
	
	cout<<c;
	
	
}
