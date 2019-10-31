#include<bits/stdc++.h>
using namespace std;
long long int n,i,a[1005],j,c,maxi,mini;
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	
	maxi=*max_element(a,a+n);
	mini=*min_element(a,a+n);
	cout<<(maxi-mini-n+1);
}
