	#include<bits/stdc++.h>
	using namespace std;
	long long int n,i,x,y,ne,p;
	//string
	#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int main()
	{
		fastread;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>x>>y;
			if(x>0)
				p++;
			if(x<0)
				ne++;
		}
		if(ne<=1 || p<=1)
			cout<<"Yes";
		else
			cout<<"No";
		return 0;
	}
