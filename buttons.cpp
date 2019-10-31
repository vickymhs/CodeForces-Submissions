	#include<bits/stdc++.h>
	using namespace std;
	int n,i,v1,v2;
	#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int main()
	{
		fastread;
		cin>>n;
		for(i=1;i<n;i++)
		{
			v1+=(n-i)*i;
		}
		cout<<v1+n;
		return 0;
	}
