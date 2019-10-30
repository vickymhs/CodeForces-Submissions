//magnets
#include<iostream>
using namespace std;

int main()
{
	int n,c=1,a[100000],i;
	cin>>n;
	
	for(i=0;i<n;i++)
	cin>>a[i];
	
	//if(n==1)
	//cout<<1;
	
	//else
	//{
	for(i=0;i<n-1;i++)
	{
		if(a[i]!=a[i+1])
		c++;
		
	}
		cout<<c;
	//}

}
