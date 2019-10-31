	#include<bits/stdc++.h>
	using namespace std;
	long long int n,i,j,a[1005],mini=1e9,s,pos;
	//string
	#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int main()
	{
		fastread;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=1;i<=100;i++)
		{
			s=0;
			for(j=0;j<n;j++)
			{
				if(fabs(a[j]-i)>1)
				{
					if(a[j]>i)
						s+=fabs(a[j]-(i+1));
					else if(a[j]<i)
						s+=fabs(a[j]+1-i);
				}
			}
			//cout<<s<<endl;
			if(s<mini)
			{
				mini=s;
				pos=i;
			}
		}
		cout<<pos<<" "<<mini;
		return 0;
	}
