#include<bits/stdc++.h>
using namespace std;
string a,b,c[10],d[10];
int n,i,j;
int main()
{
	cin>>a>>b;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>c[i]>>d[i];
	}
	cout<<a<<" "<<b<<endl;
	for(i=0;i<n;i++)
	{
		if(c[i]==a)
		a=d[i];
		else
		b=d[i];
		
		cout<<a<<" "<<b<<endl;
	}
}
