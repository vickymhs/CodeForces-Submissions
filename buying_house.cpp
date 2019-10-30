#include<bits/stdc++.h>
using namespace std;
long int n,m,k,a[105],b[105],c,i,j,s;
int main()
{
	cin>>n>>m>>k;
	for(i=0;i<n;i++)
	cin>>a[i];
	
	s=1e9;c=1e9;
	for(i=0;i<n;i++)
	{
		if(a[i]<=k && a[i]>0)
		//if(fabs(a[i]-a[m-1])<=s  && fabs(a[i]-a[m-1])>0 && a[i]<=k)
		{
			j=fabs(m-1-i);
			if(j<=c)
			{
				c=j;
				s=fabs(a[i]-a[m-1]);
				//cout<<c<<" "<<s<<endl;
			}
			
		}
	}
	
	cout<<(c*10);
}

