#include<bits/stdc++.h>
	using namespace std;
	 int n,m,i,f,c,x,y;
	vector <pair <int, int> > v;
	//string
	#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int main()
	{
		fastread;
		cin>>n>>m;
		for (i=0; i<n; i++)
		{
			cin>>x>>y;
			v.push_back( make_pair(x,y) );
		}
        
		for(i=0;i<n;i++)
		{
			if(v[i].second >= v[i+1].first)
			{
				if(v[i].second>=m)
				{
					f=1;break;
				}		
			}
			else
			{
				f=0;
				break;
			}
			//if(f==1)
			//	break;


		}
		if(f==1)
			cout<<"YES";
		else
			cout<<"NO";
		return 0;
	}

