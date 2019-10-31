#include<bits/stdc++.h>
using namespace std;
int c[104],i,j,n,k;
string s,b;
vector< pair <string,int> >v;
int main()
{
	cin>>n>>s;
	k=0;
	b=s.substr(0,2);
	v.push_back(make_pair(b,k));
	k++;
	c[0]=1;
	for(i=1;i<n-1;i++)
	{
		int f=0;
		b=s.substr(i,2);
		for(j=0;j<v.size();j++)
		{
			if(v[j].first==b)
			{
				c[v[j].second]++;
				f=1;
				break;
			}
		}
		if(f==0)
		{
			v.push_back(make_pair(b,k));
			c[k]++;
			k++;
		}
	}
	/*for(i=0;i<v.size();i++)
	{
		cout<<v[i].first<<"  "<<v[i].second<<endl;
	}
	for(i=0;i<n;i++)
	cout<<c[i]<<" ";
	*/
	i=max_element(c,c+n)-c;
	//cout<<i;
	
	cout<<v[i].first;
}
