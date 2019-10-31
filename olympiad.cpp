	#include<bits/stdc++.h>
	using namespace std;
	long long int n,i,j,x;
	set<long long int>s;
	//string
	#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int main()
	{
		fastread;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>x;
			if(x!=0)
				s.insert(x);
		}
		cout<<s.size();
		return 0;
	}
