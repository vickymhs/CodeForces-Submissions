#include<bits/stdc++.h>
using namespace std;

long long int t[100005];
int main()
{
	long long int n,c,i,b=1;
	cin>>n>>c;
	for(i=0;i<n;i++)
	{
		cin>>t[i];
	}
	
	for(i=1;i<n;i++)
	{
		if(t[i]-t[i-1]<=c)
		b++;
		else
		b=1;
	}
	
	cout<<b;
}
