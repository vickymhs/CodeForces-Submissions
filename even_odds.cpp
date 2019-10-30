// even odds
#include<iostream>
using namespace std;

int main()
{
	long long int n,k,m,s;
	cin>>n>>k;
	if(n%2==0)
	m=n/2;
	else
	m=n/2 +1;
	
	if(k<=m)
	s=1+((k-1)*2);
	else
	{
		k=k-m;
		s=2+((k-1)*2);
	}
	cout<<s;
	
	/*for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			o[x]=i;
			x++;
		}
		
		else
		{
			e[y]=i;
			y++;
		}
	}
	/*cout<<y<<endl;
	for(i=1;i<y;i++)
	cout<<e[i];
	cout<<endl;
	
	for(i=0;i<x;i++)
	cout<<o[i];
	cout<<endl;
	
	for(i=1;i<x;i++)
	c[i]=o[i];
	
	for(j=1;j<y;j++,i++)
	{
		c[i]=e[j];
	//	cout<<c[i]<<endl;
	}
	
	//cout<<x<<y;
	cout<<c[k];
	*/	
}
