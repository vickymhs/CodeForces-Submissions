#include<bits/stdc++.h>
using namespace std;
long long int n,x,a,i,s;
int main()
{
	cin>>n>>x;
	for(i=0;i<n;i++)
	{
		cin>>a;
		s=s+a;
	}
	s=s+(n-1);
	if(s==x)
	cout<<"YES";
	else cout<<"NO";
}
