#include<bits/stdc++.h>
using namespace std;
long long int g,a,b,x,y,d1,d2;
long long int gcd(long long int x, long long int y)
{
	if(y==0)
		return x;
	else
		gcd(y,x%y);
}
int main()
{
	cin>>a>>b>>x>>y;
	g=gcd(x,y);
	x/=g;
	y/=g;
	d1=a/x;
	d2=b/y;
	cout<<min(d1,d2);
}
