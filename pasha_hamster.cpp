	#include<bits/stdc++.h>
	using namespace std;
	int n,i,j,a,b,c[105],x;
	//string
	#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int main()
	{
		fastread;
		cin>>n>>a>>b;
		for(i=0;i<a;i++)
		{
			cin>>x;
			c[x]=1;
		}
		for(i=0;i<b;i++)
		{
			cin>>x;
			if(c[x]==0)
				c[x]=2;
		}
		for(i=1;i<=n;i++)
			cout<<c[i]<<" ";
		return 0;
	}
