#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int n,k,i,j=0,c=0,a[2005];
	
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	if(n<3)
	{
		cout<<0;
		exit(0);
	}
	else
	{
		for(i=0;i<n;i+=3)
	{
		//cout<<a[i]<<" "<<a[i+1]<<" "<<a[i+2]<<endl;
		if(a[i]>5 ||a[i+1]>5 ||a[i+2]>5)
		{
			j=1;
			break;
		}
		else
		{
			a[i]+=k;
			a[i+1]+=k;
			a[i+2]+=k;
			if(a[i]>5 ||a[i+1]>5 ||a[i+2]>5)
			{
				j=1;
				break;
			}
			else
			c++;
			
		}
		if(j==1)
		break;
	}
	cout<<c;
	}
	
}
