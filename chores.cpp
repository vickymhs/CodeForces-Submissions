	#include<bits/stdc++.h>
	using namespace std;
	long long int n,x,k,a[200],i,j,c;
	//string
	#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int main()
	{
		fastread;
		cin>>n>>k>>x;
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<n-k;i++)
			c+=a[i];
		c+=(k*x);
		cout<<c;
		return 0;
	}
