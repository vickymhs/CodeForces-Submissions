#include<bits/stdc++.h>
using namespace std;
long long int n,k,i,f[100005],t[100005];
int main()
{
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>f[i]>>t[i];
		
		if(t[i]>k)
		f[i]=f[i]-(t[i]-k);
		
	}
	cout<<*max_element(f,f+n);
}
