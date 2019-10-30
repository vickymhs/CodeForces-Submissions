#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int a,b,c,x,y,z;
	cin>>a>>b>>c;
	y=sqrt((a*b)/c);
	x=a/y;
	z=b/y;
//	cout<<x<<y<<z<<endl;	
	cout<<4*(x+y+z);
}
