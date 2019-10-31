	#include<bits/stdc++.h>
	using namespace std;
	long long int n,i,j,a[1005],k,maxi;
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
		cout<<*max_element(a,a+n)<<" ";
		maxi=*max_element(a,a+n);
		sort(a,a+n);
		i=0;
		while(i<n)
		{
			if(maxi%a[i]==0)
			{
				
				if(a[i]==a[i+1])
				{
					a[i]=0;
					i+=2;
				}
				else
				{
					a[i]=0;
					i+=1;
				}
			}
			else
				i+=1;
		}
		sort(a,a+n);
		cout<<*max_element(a,a+n);
		return 0;
	}
