#include<bits/stdc++.h>
using namespace std;
long long int l,m,n,k;
int main()
{
	cin>>n>>m;
	if(n<m)
	{
		cout<<-1;
		exit(0);
	}
	if(n%2==0)
	k=n/2;
	else
	k=(n/2)+1;
	while(k%m!=0)
	{
		k++;
	}
	cout<<k;
}
