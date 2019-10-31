	#include<bits/stdc++.h>
	using namespace std;
	long long int n,i,a[105],s,d,t;
	//string
	#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int main()
	{
		fastread;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			s+=a[i];
		}
		d=ceil(n*4.5);
		//cout<<d-s;
		t=(d-s);
		sort(a,a+n);
		i=0;
		while(t>0)
		{
			t=t-(5-a[i]);
			i++;
		}
		cout<<i;
		return 0;
	}
