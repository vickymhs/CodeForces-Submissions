#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[1005],i,s1=0,s2=0,h,t,c=0;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	h=a[0];t=a[n-1];
	i=0;int j=n-1;
	while(i<=j)
	{
		if(h>t)
		{
			if(c%2==0)
			{
				s1+=h;
			}
			
			else
			{
				s2+=h;
				//h=a[i++];
			}
			h=a[++i];
		}
		else
		{
			if(c%2==0)
			s1+=t;
			else
			s2+=t;
			
			t=a[--j];
		}
		c++;
	//	cout<<s1<<" "<<s2;
		//cout<<endl;
	}
		
	cout<<s1<<" "<<s2;
	
}
