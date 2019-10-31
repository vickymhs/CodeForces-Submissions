	#include<bits/stdc++.h>
	using namespace std;
	long long int n,m,a[105],i,j,c,s;
	//string
	#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int main()
	{
		fastread;
		cin>>n>>m;
		for(i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		for(i=n-1;i>=0;i--)
		{
			s+=a[i];
			c++;
			if(s>=m)
				break;
		}
		cout<<c;
		return 0;
	}
