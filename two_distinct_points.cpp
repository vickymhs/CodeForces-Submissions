	#include<bits/stdc++.h>
	using namespace std;
	long long int n,l1,l2,r1,r2,mini,maxi,i,j,d1,d2;
	//string
	#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int main()
	{
		fastread;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>l1>>r1>>l2>>r2;
			d1=r1-l1;
			d2=r2-l2;
			if(d1<d2)
			{
				cout<<l1<<" ";
				if(l2==l1)
					cout<<l2+1;
				else
					cout<<l2;
			}
			else
			{
				
				if(l2==l1)
					cout<<l1+1<<" ";
				else
					cout<<l1<<" ";
				cout<<l2;
			}
			cout<<endl;
		}
		return 0;
	}
