#include<bits/stdc++.h>
using namespace std;
string a,b,c;
int i,j,k;
int main()
{
	cin>>a;
	cin>>b;
	for(i=0;i<a.length();i++)
	{
		
		if(a[i]<b[i])
		{
			cout<<-1;
			return 0;
		}
	//	cout<<c[i];
	}
	cout<<b;
}

