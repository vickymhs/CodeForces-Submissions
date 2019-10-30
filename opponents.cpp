#include<bits/stdc++.h>
using namespace std;
long int i,j,n,c,d,k;
string a;
int main()
{
	cin>>n>>d;
	for(i=0;i<d;i++)
	{
		cin>>a;
		
		for(j=0;j<a.length();j++)
		{
			if(a[j] == '0')
			break;
		}
		
		//cout<<j<<endl;
		if(j<n)
		{
			c++;
			k=max(c,k);
		}
		else
		{
			c=0;
			k=max(c,k);
		}
		//cout<<c<<endl;

	}
	
	cout<<k;
}
