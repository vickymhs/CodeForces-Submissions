#include<bits/stdc++.h>
using namespace std;
long long int n,k,i,j,t,c,x[26];
string s;
char a[200][200];
int main()
{
	cin>>n>>k;
	cin>>s;
	for(i=0;i<n;i++)
	{
		x[s[i]-97]++;
	}
	j=n/k;
	for(i=0;i<26;i++)
	//cout<<x[i]<<" ";
	//cout<<endl;
	for(i=0;i<26;i++)
	{
		if(x[i]>k)
		{
			cout<<"NO";
			exit(0);
		}
	}
	cout<<"YES";
}
