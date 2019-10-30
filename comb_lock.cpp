#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main()
{
	int n,i,c=0,s,m;
	string x,y;
	
	cin>>n;
	cin>>x>>y;
	
	for(i=0;i<n;i++)
	{
		s=fabs(x[i]-y[i]);
		
		if(x[i]<y[i])
		{
			x[i]=x[i]+10;
			m=fabs(x[i]-y[i]);
		}
		
		else
		{
			y[i]=y[i]+10;
			m=fabs(x[i]-y[i]);
		}
		
		if(s<m)
		c=c+s;
		else
		c=c+m;
	}
	
	cout<<c;
}
