#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int x,y,x1,y1,x2,y2,m;
	cin>>x>>y;
	if(x>0 && y>0)
	{
	x1=0;
	y1=fabs(x)+fabs(y);
	x2=fabs(x)+fabs(y);
	y2=0;
	}
	else if(x<0 && y>0)
	{
	x2=0;
	y2=fabs(x)+fabs(y);
	x1=-(fabs(x)+fabs(y));
	y1=0;
	}
	else if (x<0 && y<0)
	{
		x2=0;
	y2=-(fabs(x)+fabs(y));
	x1=-(fabs(x)+fabs(y));
	y1=0;
	}
	else if(x>0 && y<0)
	{
	x1=0;
	y1=-(fabs(x)+fabs(y));
	x2=fabs(x)+fabs(y);
	y2=0;
	}
	
	cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2;
	
	
}
