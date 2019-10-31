	#include<bits/stdc++.h>
	using namespace std;
	int n,d,i;
	//string
	#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int main()
	{
		fastread;
		cin>>n;
		cout<<n/2<<endl;
		d=n/2;
		for(i=0;i<d-1;i++)
			cout<<"2 ";
		if(n%2==0)
			cout<<"2";
		else
			cout<<"3";
		return 0;
	}
