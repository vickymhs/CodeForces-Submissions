#include<iostream>
#include<algorithm>
using namespace std;

int c[1005];
int main()
{
	int n,a[1005],b[1005],i,j;
	
	cin>>n;
	
	for(i=0;i<n;i++)
	cin>>a[i]>>b[i];
	
	for(i=0;i<n;i++)
	{
		c[i+1]=c[i]-a[i]+b[i];
	}
	
	cout<<*max_element(c,c+n);
}
