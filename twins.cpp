#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s=0,d=0,c=0,b=0,i;
	vector <int> v(105);
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>v[i];
		s=s+v[i];
	}
	sort(v.rbegin(),v.rend());
	for(i=0;i<n;i++)
	{
		d=d+v[i];
		b=s-d;
		c++;
		if(d>b)
		break;
	}
	cout<<c;
}
