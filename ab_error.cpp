#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,a[100009],b[100009],c[100009],x;
	long long int i,s=0,j,k,s1=0,s2=0;
	cin>>n;
	x=n;
	for(i=0;i<3;i++)
	{
		if(x==n)
		{
			for(j=0;j<n;j++)
			{
				cin>>a[j];
				s=s+a[j];
			}
			n--;
			//cout<<n<<endl;
		}
		
		else if(x==n+1)
		{
			for(j=0;j<n;j++)
			{
				cin>>b[j];
				s1=s1+b[j];
			}
			n--;	
			//cout<<n<<endl;
		}
		
		else if (x==n+2)
		{
			for(j=0;j<n;j++)
			{
				cin>>c[j];
				s2=s2+c[j];
			}
			n--;
		//	cout<<n<<endl;
		}
		
	}
	cout<<s-s1<<endl<<s1-s2;
}
