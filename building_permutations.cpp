#include<bits/stdc++.h>

using namespace std;

long long int a[300005];
int main()
{
	long long int n,i,s=0;
	//long long int a[300005];
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	
	for(i=1;i<=n;i++)
	{
		s=s+fabs(a[i]-i);
	}
	cout<<s;
}
