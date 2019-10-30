#include<bits/stdc++.h>
using namespace std;

long int a[1005],i,j,k,b,c,d,n;
vector <long int> z,pos,neg;

int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]<0)
		{
			neg.push_back(a[i]);
			j++;
		}
		else if(a[i]>0)
		{
			pos.push_back(a[i]);
			k++;
		}
		else
		{
			z.push_back(a[i]);
			d++;
		}
	}
	
	if(k==0)
	{//b=neg.pop_back();
	//c=neg.pop_back();
	
	pos.push_back(neg.back());
	neg.pop_back();
	pos.push_back(neg.back());
	neg.pop_back();
	k=2;j=j-2;
	}
	if(j%2==0)
	{
		z.push_back(neg.back());
		neg.pop_back();
		d++;j--;
	}
	
	cout<<endl<<j<<" ";
	for(i=0;i<j;i++)
	cout<<neg[i]<<" ";
	
	cout<<endl<<k<<" ";
	for(i=0;i<k;i++)
	cout<<pos[i]<<" ";
	
	cout<<endl<<d<<" ";
	for(i=0;i<d;i++)
	cout<<z[i]<<" ";


}
