#include<bits/stdc++.h>
using namespace std;
int n,i,j,a,b,c,x[100005];
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	cin>>x[i];
	
	sort(x,x+n);
	for(i=0;i<n-2;i++)
	{
		a=x[i];
		b=x[i+1];
		c=x[i+2];
		if(a+b>c && b+c>a && c+a>b)
		{
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
}
