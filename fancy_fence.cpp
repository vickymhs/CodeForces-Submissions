#include<bits/stdc++.h>
using namespace std;

int main()
{
		int t,i;
		string x[200];
		double a,n;
		cin>>t;
		for(i=0;i<t;i++)
		{
			cin>>a;
			n=360/(180-a);
			//cout<<n<<endl;
			if(int(n)==n)
			{
				x[i]="YES";
			}
			else
			x[i]="NO";
		}
		
		for(i=0;i<t;i++)
		cout<<x[i]<<endl;
}
