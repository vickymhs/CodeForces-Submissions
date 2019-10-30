#include<bits/stdc++.h>

using namespace std;

int main()
{
	string x;
	int n,i,c=0,m=0,a[200],k=0;
	cin>>n;
	cin>>x;
	for(i=0;i<n;i++)
	{
		if(x[i]=='B')
		{
			if(i==n-1)
			m++;
			
			c++;
			a[k]=c;
			
		}
		
		else if((x[i-1]=='B' && x[i]=='W') || (i==n-1 && x[i]=='B'))
		{
			m++;
			c=0;
			k++;
		}
		
	
		
	}
	
	cout<<m<<endl;
	for(i=0;i<m;i++)
	{
		cout<<a[i]<<" ";
	}
}
