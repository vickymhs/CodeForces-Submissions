#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int h[100005],m[100005],i,j,b[100005];
	long int n;
	
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>h[i]>>m[i];
		b[i]=1;
	}
	
	for(i=0;i<n-1;i++)
	{
		if(h[i]==h[i+1])
		{
			if(m[i]==m[i+1])
			b[i+1]=b[i]+1;
			
		}
	}
	cout<<*std::max_element(b,b+n);
}
