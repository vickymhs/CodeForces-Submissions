#include<bits/stdc++.h>
using namespace std;
long long l,r,i,n;
int main()
{
	cin>>l>>r;
	n=(r-l+1)/2;
	cout<<"YES\n";
	while(n--)
	{
		cout<<l<<" "<<l+1<<endl;
		l+=2;
	}
}
