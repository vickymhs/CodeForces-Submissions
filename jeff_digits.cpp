#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int n,a[1005],i,f=0,z=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==5)
		f++;
		else
		z++;
	}
	
	if(z==0)
	cout<<-1;
	
	else if(f>=9)
	{
		for(i=0;i<f/9 * 9;i++)
		cout<<5;
		for(i=0;i<z;i++)
		cout<<0;
	}
	
	else
	cout<<0;
}
