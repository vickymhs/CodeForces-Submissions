#include<bits/stdc++.h>
using namespace std;
int n,i,a[100],c[1005];
set<int>s;
int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
	cin>>a[i];
	for(i=1;i<=n;i++)
	{
		s.insert(a[i]);
		c[a[i]]=i;
	}
	cout<<s.size()<<endl;
	sort(c,c+1000);
	for(i=0;i<1000;i++)
	{
		if(c[i]>0)
		cout<<a[c[i]]<<" ";
	}
	
}
