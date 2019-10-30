#include<iostream>

using namespace std;

int main()
{
	long int n,i,a[1005],b,s,c=0,d=0;
	cin>>n;
	
	for(i=0;i<n;i++)
	cin>>a[i];
	
	b=a[0];s=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>b)
		{
			b=a[i];
			c++;
		}
		
		if(a[i]<s)
		{
			s=a[i];
			d++;
		}
		
	}
	
	cout<<c+d;
}
