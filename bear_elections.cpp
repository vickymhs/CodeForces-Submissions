#include<bits/stdc++.h>

using namespace std;

int main()
{
	long int n,i,a[1005],c=0,pos,y,x;
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	x=*max_element(a+1,a+n);
//	cout<<x<<" ";
	if(x<a[0])
	{
		cout<<0;
		exit(0);
	}
	
	else if(x==a[0])
	{
		cout<<1;
		exit(0);
	}
	
	else
	{
	y=*max_element(a+1,a+n);
		
		pos=max_element(a+1,a+n)-a;	
		
		while(a[0]<=y)
		{
			y=*max_element(a+1,a+n);
		
			pos=max_element(a+1,a+n)-a;
			//cout<<y<<" ";
			//cout<<pos<<endl;
			a[pos]--;
			a[0]++;
			c++;
			y=*max_element(a+1,a+n);
		}
	}
	
	cout<<c;
}
