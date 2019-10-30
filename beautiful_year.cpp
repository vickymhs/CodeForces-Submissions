#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int y,a,b,c,d,f=1,x;
	cin>>x;
	x++;
	while(f==1)
	{
		y=x;
		a=y%10;
		y=y/10;
		b=y%10;
		y=y/10;
		c=y%10;
		y=y/10;
		d=y%10;
		if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
		{
			cout<<x;
			f=0;
		}
		else
		{
			f=1;
			x++;
		}
		
	}
}
