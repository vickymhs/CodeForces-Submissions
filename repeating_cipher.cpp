#include<bits/stdc++.h>
using namespace std;
long long n,i,j,pos;
string s,temp;
int main()
{
	cin>>n;
	cin>>s;
	if(n==1)
	{
		cout<<s;
		return 0;
	}
	else
	{
		i=0;j=0;
		while(i<n)
		{
			cout<<s[i];
			j++;
			i+=j;
		}
	}
	return 0;
}
