// physicist

#include<iostream>
using namespace std;

int main()
{
	int x[105],y[105],z[105],a=0,b=0,c=0,n;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>x[i]>>y[i]>>z[i];
		a+=x[i];
		b+=y[i];
		c+=z[i];
	}
	
	if(a!=0 || b!=0 || c!=0)
	cout<<"NO";
	
	else
	cout<<"YES";
}
