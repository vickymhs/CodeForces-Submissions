	#include<bits/stdc++.h>
	using namespace std;
	long long int n,i,j;
	//string
	#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int main()
	{
		fastread;
		cin>>n;
		if(n==0)
			cout<<0;
		else if((n+1)%2==0)
			cout<<(n+1)/2;
		else
			cout<<n+1;
		return 0;
	}
