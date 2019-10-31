	#include<bits/stdc++.h>
	using namespace std;
	int n,i,j,c,x,f;
	vector<int>v[1003];
	//string
	#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int main()
	{
		fastread;
		cin>>n;
		for(i=2;i<=n;i++)
		{
			cin>>x;
			v[x].push_back(i);
		}
		/*for(i=1;i<=n;i++)
		{
			cout<<i<<"->";
			if(v[i].size()>0)
			{
				for(j=0;j<v[i].size();j++)
					cout<<v[i][j]<<" ";
			}
			cout<<"\n";
		}*/
		for(i=1;i<=n;i++)
		{
			c=0;
			if(v[i].size()>0)
			{
				for(j=0;j<v[i].size();j++)
				{
					if(v[v[i][j]].size()==0)
						c++;
				}
				if(c<3)
					f=1; //not spurce
			}
		}
		if(f==0)
			cout<<"Yes";
		else
			cout<<"No";
		return 0;
	}
