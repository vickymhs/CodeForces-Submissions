#include<bits/stdc++.h>
using namespace std;
int n,a,b,c,d,i,s,j;
vector< pair <int,int> >p;
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a>>b>>c>>d;
		s=a+b+c+d;
		//cout<<s<<endl;
		p.push_back(make_pair(s,i));
	}
	for(i=0;i<p.size();i++)
	{
		for(j=0;j<p.size()-1;j++)
		{
			if(i!=j)
			{
				if(p[j].first< p[j+1].first)
				{
					swap(p[j].first,p[j+1].first);
					swap(p[j].second, p[j+1].second);
				}
				else if(p[j].first == p[j+1].first)
				{
					if(p[j].second > p[j+1].second)
					{
						swap(p[j].first,p[j+1].first);
						swap(p[j].second, p[j+1].second);
					}
				}
			}
		}
	}
	for(i=0;i<p.size();i++)
	{
		if(p[i].second==0)
		{
			cout<<i+1;
			break;
		}
		//cout<<p[i].first<<" "<<p[i].second<<endl;
	}
	return 0;
}
