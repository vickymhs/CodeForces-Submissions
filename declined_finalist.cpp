	#include<bits/stdc++.h>
	using namespace std;
	long long int k,i,j,p[30],a[30],s,n;
	//string
	#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int main()
	{
		fastread;
		cin>>n;
		for(i=0;i<n;i++)
			cin>>a[i];
		
		sort(a,a+n);

		for(i=1;i<n;i++)
		{
			s+=a[i]-a[i-1]-1;
			//cout<<s<<endl;
		}
		s+=a[0]-1;
		if(*max_element(a,a+n)<25)
		{
			s+=25-a[n-1];
		}
		//cout<<s<<endl;
		cout<<s-(25-n);
		return 0;
	}
