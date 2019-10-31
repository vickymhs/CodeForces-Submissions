#include<bits/stdc++.h>
using namespace std;
int n,k,a[105],i,j,e,s,c1,t1,t2,c2;
vector<int>v;
int main()
{
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==1)
		c1++;
	}
	c2=n-c1;
	for(i=0;i<k;i++)
	{
		t1=c1;
		t2=c2;
		j=i;
		while(j<n)
		{
			if(a[j]==1)
			t1--;
			else
			t2--;
			j+=k;
		}
		j=i-k;
		while(j>=0)
		{
			if(a[j]==1)
			t1--;
			else
			t2--;
			j=-k;
		}
		v.push_back(fabs(t1-t2));
	}
	/*for(int u=0;u<v.size();u++)
	cout<<v[u]<<" ";
	cout<<endl;*/
	cout<<*max_element(v.begin(),v.end());
}
