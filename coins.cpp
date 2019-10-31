	#include<bits/stdc++.h>
	using namespace std;
	long long int n,s,d,r;
	//string
	#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int main()
	{
		fastread;
		cin>>n>>s;
		d=s/n;
		r=s%n;
		if(r!=0)
			d++;
		cout<<d;
		return 0;
	}
