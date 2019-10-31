#include<bits/stdc++.h>
using namespace std;
long long int n,t,a,i,j,c,s;
int main()
{
	cin>>n>>t;
	for(i=0;i<n;i++)
	{
		cin>>a;
		s=t-a;
		if(s>=0)
		{
			t=s;
			c++;
		}	
		else
		continue;
	}
	
	cout<<c;
}
