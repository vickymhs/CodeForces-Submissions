#include<bits/stdc++.h>
using namespace std;
long long int i,s,j;
string a,b="";
int main()
{
	cin>>a;
	if(a.length()==1)
	{
		cout<<a;
		exit(0);
	}
	for(i=0;i<a.length();i++)
	{
		//cout<<a[i]<<" "<<int(a[i])-48<<endl;
		if(int(a[i])-48 == 9 && i==0)
		continue;
		
		if(int(a[i])-48>4)
		{
			//cout<<(9-(int(a[i])-48))<<endl;
			//b+=(9-(int(a[i])-48));
			a[i]=(9-(int(a[i])-48))+48;
		//cout<<char(9-(int(a[i])-48))<<endl;
		
		}
		//else
		//b+=a[i];
	}
	//b+='0';
	cout<<a;
	//cout<<b;
}
