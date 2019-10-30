// army
#include<iostream>

using namespace std;

int main()
{
	int n,i,j,s=0,a,b,d[105];
	cin>>n;
	
	for(i=1;i<=n-1;i++)
	cin>>d[i];
	
	cin>>a>>b;
	
	for(j=a;j<b;j++)
	{
		s=s+d[j];
	}
	
	cout<<s;
}
