#include<bits/stdc++.h>
using namespace std;
long long int n,i,k,p,q,m=998244353;
string a;
int main()
{
	cin>>n>>a;
	i=0;
	p=1;q=1;
	while(i<n)
	{
		if(a[i]==a[i+1])
		p++;
		else
		break;
		i++;
	}
	i=n-1;
	while(i>=0)
	{
		if(a[i]==a[i-1])
		q++;
		else
		break;
		i--;
	}
	if(p==n)
	{
		k=(((n%m)*((n+1)%m))%m);
		cout<<(k/2)%m;
		return 0;
	}
	else if(a[0]==a[n-1])
	{
		cout<<(((p+q+1)%m)+((p%m*q%m)%m))%m;
		return 0;
	}
	else if(a[0]!=a[n-1])
	{
		cout<<(p+q+1)%m;
		return 0;
	}
}
