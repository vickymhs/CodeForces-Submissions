#include<bits/stdc++.h>
using namespace std;
long long int n,i,j,x,c[1000005],mini=1e9,k;
vector<int>v[1000005];
int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>x;
		v[x].push_back(i);
		c[x]++;
	}
	j=*max_element(c,c+1000005);
	//cout<<j<<endl;
	for(i=1;i<=1000005;i++)
	{
		if(v[i].size()==j && !v[i].empty())
		{
			if(mini>v[i][v[i].size()-1])
			{
				mini=v[i][v[i].size()-1];
				k=i;
			}
		}
	}
	cout<<k<<endl;
}
