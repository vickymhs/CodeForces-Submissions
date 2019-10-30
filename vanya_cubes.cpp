#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,sum=0,a[1005],b[1005];
	cin>>n;
	if(n==1)
	cout<<1;
	
	else
	{
		a[1]=1;i=1;	
		b[1]=1;
		//sum=a[1];
		while(n>=b[i])
		{
			i++;
			a[i]=a[i-1]+i;
			b[i]=b[i-1]+a[i];
			//cout<<b[i]<<endl;
		}
		cout<<i-1;
	}
}
