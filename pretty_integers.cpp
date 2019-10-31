	#include<bits/stdc++.h>
	using namespace std;
	long long int m,n,a[10],b[10],i,j;
	std::vector<int> v;
	//string
	int main()
	{
		cin>>n>>m;
		for( i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		for( i=0;i<m;i++)
			cin>>b[i];
		sort(b,b+m);
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(a[i]==b[j])
					v.push_back(a[i]);
			}
		}
		sort(v.begin(),v.end());
		if(v.size()>0)
		{
			cout<<v[0]<<endl;
		}
		else
		{
			cout<<min(a[0],b[0])<<max(a[0],b[0])<<endl;
		}

	}
