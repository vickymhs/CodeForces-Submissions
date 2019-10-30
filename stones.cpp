#include<iostream>
using namespace std;

int main()
{
	int n,c=0,i;
	cin>>n;
	char a[50];
	
	for(i=0;i<n;i++)
	cin>>a[i];

	if(n==1)
	cout<<0;
	
	else
	{
		for(i=0;i<n-1;i++)
		{
			if(a[i]==a[i+1])
			c++;
		}
			cout<<c;
	}

	
}
