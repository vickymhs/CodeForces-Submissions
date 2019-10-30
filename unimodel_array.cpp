#include<bits/stdc++.h>
using namespace std;
long long int n,i,j,c,a[10000],f;
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n-1;i++)
	{
		if(a[i]<a[i+1] && i<i+1)
		{
				f=0;
				continue;
		}
		else if(a[i]==a[i+1] && i<i+1)
		{
			if(a[i+1]<a[i+2])
			{
				f=1;break;
			}
			else
			{
				f=0;
			continue;
			}
		}
		else if(a[i]>a[i+1] && i<i+1)
		{
			if(a[i+1]>a[i+2] && i+1<i+2)
				{
				f=0;
			continue;
			}
			else
			{
				f=1;break;
			}
		}
		else
		{
			f=1;
			break;
		}
	}
	if(f==1)
	cout<<"NO";
	else
	cout<<"YES";
}
