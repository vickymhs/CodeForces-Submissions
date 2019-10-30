#include<iostream>

using namespace std;

int main()
{
	int n,h,a[2005],c=0,i;
	cin>>n>>h;
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]<=h)
		c++;
		else
		c=c+2;
	}
	
	cout<<c;
}
