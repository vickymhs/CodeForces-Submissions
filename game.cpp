	#include<bits/stdc++.h>
	using namespace std;
	long long int n,i,j,a[1005];
	//string
	#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int main()
	{
		fastread;
		cin>>n;
		for(i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		if(n%2==1)
			cout<<a[n/2];
		else
			cout<<a[n/2 -1];
	}
