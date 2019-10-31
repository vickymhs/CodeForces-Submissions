	#include<bits/stdc++.h>
	using namespace std;
	int n,a,b,c[105],i,d;
	//string
	#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int main()
	{
		fastread;
		cin>>n>>a>>b;
		for(i=n-1;i>=n-1-b;i--)
			c[i]++;
		for(i=a;i<n;i++)
			c[i]++;
		for(i=0;i<=n;i++)
		{
			//cout<<c[i]<<" ";
			if(c[i]==2)
				d++;
		}
		//cout<<endl;
		cout<<d;
		return 0;
	}
