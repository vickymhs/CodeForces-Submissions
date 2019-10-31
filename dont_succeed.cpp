	#include<bits/stdc++.h>
	using namespace std;
	long long int n,a,b,c,d,f;
	//string
	#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int main()
	{
		fastread;
		cin>>a>>b>>c>>n;
		if(a-c<0 || b-c<0)
			f=1;
		else
		{
			d=n-(a+b-c);
			if(d<1)
				f=1;
		}
		if(f==1)
			cout<<-1;
		else
			cout<<d;
		return 0;
	}
