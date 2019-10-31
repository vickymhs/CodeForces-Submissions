#include<bits/stdc++.h>
using namespace std;
long long int n,i,j,k;
string s;
int main()
{
	cin>>s;
//	cout<<s[0]<<endl;
	k=s.length();
	if(s[0]=='-')
	{
		i=(s[k-1]);
		j=(s[k-2]);
		cout<<i<<" "<<j<<endl;
		if(i>j)
		{
			for(int m=0;m<k-2;m++)
		cout<<s[i];
		}
		else
		{
			for(int m=0;m<k-3;m++)
			cout<<s[i];
			cout<<i;
		}
		
		
	}
	else
	cout<<s;
}
