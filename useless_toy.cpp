#include<bits/stdc++.h>
using namespace std;
char x,y,a[10];
int i,j,k,c,m,n,l,cc;
int main()
{
	cin>>x>>y;
	cin>>n;
	a[0]='v';
	a[1]='<';
	a[2]='^';
	a[3]='>';
	for(i=0;i<10;i++)
	{
		if(a[i]==x)
		m=i;
		if(a[i]==y)
		l=i;
	}
	//cout<<m<<l;
	
	j=(l-m);
	i=fabs(j+n);
	k=fabs(j-n+4);
	c=(i%4);
	cc=(k%4);
	if(c>cc)
	cout<<"cw";
	else if(cc>c)
	cout<<"ccw";
	else
	cout<<"undefined";
	
}

