	#include<bits/stdc++.h>
	using namespace std;
	int n, k, l, c, d, p, nl, np,i,j,v1,v2,v3;
	//string
	#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int main()
	{
		fastread;
		cin>>n>>k>>l>>c>>d>>p>>nl>>np;
		v1=(k*l)/nl;
		v2=c*d;
		v3=p/np;
		cout<<(min(v1,min(v2,v3))/n);
		return 0;
	}
