#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t,i,j;
	cin>>n>>t;
	string a;
	cin>>a;
	for(i=0;i<t;i++)
	{
		j=0;
		while(j<n-1)
		{
			if(a[j]=='B'&&a[j+1]=='G')
			{
				swap(a[j],a[j+1]);
				j+=2;
			}
			else j++;
		}
	}
	
	cout<<a;
}
