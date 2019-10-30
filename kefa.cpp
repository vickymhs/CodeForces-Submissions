#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	long long int a[100005],i,n,b[100005];
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=1;
	}
	
	
	for(i=1;i<n;i++)
	{
		if(a[i]>=a[i-1])
		b[i]=b[i-1]+1;
	}
	
	cout<<*std::max_element(b,b+n);
}
