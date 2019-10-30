#include<bits/stdc++.h>
using namespace std;
long double a,b,c,d,x,y;
int main()
{
	cin>>a>>b;
	cin>>c>>d;
	x= sqrt( (a*a) + (b*b));
	y= sqrt( (c*c) + (d*d));
	
	if(x<y)
	cout<<"Russo";
	else if (x>y)
	cout<<"Wil";
	else
	cout<<"Empate";
	
}
