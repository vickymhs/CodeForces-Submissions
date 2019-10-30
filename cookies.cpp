#include<iostream>
using namespace std;

int main()
{
	int n,a[150],i,j,o=0,e=0,c=0;
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]%2==0)
		{
			e++;
		}
		
		else
		o++;
	}
	
	if(o%2==1)
	cout<<o;
	
	else
	cout<<e;	
	
}
