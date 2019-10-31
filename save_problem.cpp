	#include<bits/stdc++.h>
	using namespace std;
	long long int a,i,j;
	//string
	#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int main()
	{
		fastread;
		cin>>a;
		i=2*(a-1);
		if(a==1)
			cout<<1<<" "<<1<<endl<<1;
		else
		{
			cout<<i<<" "<<2<<endl<<1<<" "<<2;
		}
		return 0;
	}
