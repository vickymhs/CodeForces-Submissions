#include<bits/stdc++.h>
using namespace std;
long long n,m,i,j,maxi,mini,c,d,e,f;
int main()
{
	vector<long long>v;
	cin>>n>>m;
	//for finding maximum handshakes
	c=n-m+1;
	maxi=(c*(c-1))/2;
	//cout<<maxi<<endl;
	
	//for finding minimum handshakes
	c=(n/m)+1;
	mini+=((c)*(c-1))/2 *(n%m);
	c=n/m;
	mini+= ((c)*(c-1))/2  *(m-(n%m));
	
	cout<<mini<<" "<<maxi;
	
	
}
