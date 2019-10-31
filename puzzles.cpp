	#include<bits/stdc++.h>
	using namespace std;
	long long int n,m,a[100],i,j,maxi,mini,dmin=100000,l,r;
	//string
	#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int main()
	{
		fastread;
		cin>>n>>m;
		for(i=0;i<m;i++)
			cin>>a[i];
		sort(a,a+m);
		l=0;r=n-1;
		while(r<m)
		{
			maxi=*max_element(a+1,a+r+1);
			mini=*min_element(a+l,a+r+1);
			//cout<<maxi<<" "<<mini<<endl;
			dmin=min(dmin,(maxi-mini));
			r++;
			l++;
		}
		cout<<dmin;
		return 0;
	}
