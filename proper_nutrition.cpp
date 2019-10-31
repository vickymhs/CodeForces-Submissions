#include<bits/stdc++.h>
using namespace std;
long long int n,a,b,c,i,j,d,e;
int main()
{
	cin>>n>>a>>b;
	
	i=0;j=n;
	if(n%a==0)
	{
		cout<<"YES\n";
		cout<<n/a<<" "<<0;
		return 0;
	}
	if(n%b==0)
	{
		cout<<"YES\n";
		cout<<0<<" "<<n/b;
		return 0;
	}
	while(i<n && j>=0)
	{
		
		if(i%a==0 && j%b==0)
		{
			cout<<"YES\n";
			cout<<i/a<<" "<<j/b;
			return 0;
		}
		else
		{
			i=i+a;
			j=n-i;
		}
	}
	cout<<"NO";
}
