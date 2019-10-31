#include<bits/stdc++.h>
using namespace std;
long long int n,i,s,k;
int main()
{
	cin>>n;
	k=1;
	for(i=1;i<=n+1;i++)
	{
		k=k*2;
		//s=s+k;
	}
	cout<<s+k-2;
	
}
