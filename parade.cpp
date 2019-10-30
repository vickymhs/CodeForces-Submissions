#include<bits/stdc++.h>
using namespace std;
long long int n,i,l[100005],r[100005],flag=0,pos,sl,sr,x,y,p,q;
int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>l[i]>>r[i];
		sl+=l[i];
		sr+=r[i];
		/*if(l[i]>r[i])
		{
			x=fabs(l[i]-r[i]);
			if(x>y)
			{
				y=x;
				pos=i;
			}
		}*/
	}
	x=fabs(sl-sr);
	for(i=1;i<=n;i++)
	{
		p=sl-l[i]+r[i];
		q=sr-r[i]+l[i];
		y=fabs(p-q);
		if(y>x)
		{
			flag=1;
			pos=i;
			x=y;
		}
	}
	if(flag==0)
	cout<<0;
	else
	cout<<pos;
	//cout<<sl<<" "<<sr;
	//cout<<pos;
}
