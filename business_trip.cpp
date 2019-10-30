#include<bits/stdc++.h>

using namespace std;

int main()
{
	long int k,i,a[105],c=0,s=0;
	cin>>k;
	for(i=1;i<=12;i++)
	{
		cin>>a[i];
	}
	
	sort(a+1,a+13);
	//for(i=1;i<=12;i++)
	//cout<<a[i];
	//cout<<endl;
	
	if(k==0)
	c=0;
	else
	{
		for(i=12;i>=1;i--)
	{
		if(k<=0)
		break;
		
		else
		{
			//cout<<a[i]<<" ";
			k=k-a[i];
			//cout<<k<<endl;
			c++;
		}
	}
	}
	
	cout<<c;
	
	
	
}
