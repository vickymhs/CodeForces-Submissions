#include<bits/stdc++.h>
using namespace std;
long long int n,m,i,j,sx,sy,x[1000005],y[1000005],c,fj,fi;
int main()
{
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		cin>>x[i];
	}
	for(j=0;j<m;j++)
	{
		cin>>y[j];
	}
	i=0;j=0;
	while(i<n && j<m)
	{
		if(sx<=sy)
		{
			sx=sx+x[i];
			i++;
		}
		else
		{
			sy=sy+y[j];
			j++;
		}
		
		if(sx==sy)
		{
			c++;
			sx=0;sy=0;
			//i++;j++;
		}
		
		//cout<<sx<<" "<<sy<<" "<<c<<endl;
		
		if(i==n)
		{
			fi=1;
		}
		if(j==m)
		{
			fj=1;
		}
	}
	if(fi==1)
	{
		while(j<m)
		{
			sy=sy+y[j];
			if(sy==sx)
			{
				c++;j++;
			}
			else
			j++;
			
			//cout<<sx<<" "<<sy<<" "<<c<<endl;
		}
	}
	if(fj==1)
	{
		while(i<n)
		{
			sx=sx+x[i];
			if(sy==sx)
			{
				c++;i++;
			}
			else
			i++;
			
			//cout<<sx<<" "<<sy<<" "<<c<<endl;
		}
	}
	cout<<c;
}
