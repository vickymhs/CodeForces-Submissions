// contest 1
#include<iostream>
using namespace std;

int main()
{
	int n,i,c=0;
	long long int x,m[1000];
	char a[1000];
	
	
	cin>>n>>x;
	for(i=0;i<n;i++)
	{
		cin>>a[i]>>m[i];
	}
	
	
	for(i=0;i<n;i++)
	{
		if(a[i]=='+')
		x=x+m[i];
		
		else
		{
			if(x>=m[i])
			x=x-m[i];
			
			else
			c++;
		}
	
	
	}
	
	cout<<x<<" "<<c;
	
}
