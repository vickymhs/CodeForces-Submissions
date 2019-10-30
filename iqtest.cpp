//iq test
#include<iostream>

using namespace std;

int main()
{
	int n,a[105],i,c=0,pos;
	cin>>n;
	
	for(i=0;i<n;i++)
	cin>>a[i];
	
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		c++;
	}
	//cout<<c<<endl;
	if(c==n-1)
	{
		for(i=0;i<n;i++)
		{
			if(a[i]%2!=0)
			{
				pos=i;
				break;	
			}
		}
	}
	
	else
	{
		for(i=0;i<n;i++)
		{
			if(a[i]%2==0)
			{
				pos=i;	
				break;
			}
		}
	}
	
	cout<<pos+1;
}
