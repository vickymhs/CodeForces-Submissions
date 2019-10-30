//soldier

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int a[105],n,x,i,y,z,p1,p2;
	cin>>n;
	
	for(i=0;i<n;i++)
	cin>>a[i];
	
	x=fabs(a[0]-a[1]);
	p1=1;
	p2=2;
	
	for(i=1;i<n;i++)
	{
		y=fabs(a[i]-a[i+1]);
		if(y<x)
		{
		x=y;
		p1=i+1;
		p2=i+2;}
	}
	
	z=fabs(a[n-1]-a[0]);
	if(z<x)
	{x=z;
	p1=n;
	p2=1;}
	cout<<p1<<" "<<p2;
}
