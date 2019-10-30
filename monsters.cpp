#include<bits/stdc++.h>
using namespace std;
long long int y[200],x[200],f,i,j,n,c,d,a,b;
int main()
{
	cin>>a>>b;
	cin>>c>>d;
	for(i=0;i<=105;i++)
	{
		x[i]=b+(i*a);
		y[i]=d+(i*c);
	}
	
	for(i=0;i<=105;i++)
	{
		for(j=0;j<=105;j++)
		{
		if(x[i]==y[j])
		{
			f=1;
			n=x[i];
			break;
		}
		}
		if(f==1)
		break;
	}
	
	if(f==1)
	cout<<n;
	else
	cout<<-1;
}
