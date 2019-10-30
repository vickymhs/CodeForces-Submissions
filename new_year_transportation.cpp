#include<bits/stdc++.h>
using namespace std;
long long int v[100005],val[100005],i,j,k,n,t;
int main()
{
	cin>>n>>t;
	j=1;
	v[j]=1;val[j]=1;
	for(i=1;i<=n-1;i++)
	{
		cin>>k;
		v[i]=1;
		if(i==j)
		{
			j=j+k;
		val[j]=1;
		}
		//cout<<j<<endl;
	}
	
	if(val[t]==1)
	cout<<"YES";
	else
	cout<<"NO";
}

