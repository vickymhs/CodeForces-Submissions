#include<bits/stdc++.h>
using namespace std;
	int a[200];
int main()
{
	string s;

	cin>>s;
	long long int i,j,c=0;
	
	for(i=0;i<s.length();i++)
	{
		if(isupper(s[i]))
		{
			a[int (s[i])]++;
		}
		else
		{
			a[int (s[i])-97]++;
		}
	}
	
	//for(i=0;i<100;i++)
	//cout<<a[i]<<" ";
	
	//cout<<endl<<a[11]<<a[18]<<a[17]<<a[20]<<a[66];
	while(a[1]>0 && a[0]>1 && a[17]>0 && a[18]>0 && a[11]>0 && a[20]>1 && a[66]>0)
	{
		c++;
		a[1]--;
		a[0]-=2;
		a[17]--;
		a[18]--;
		a[11]--;
		a[20]-=2;
		a[66]--;
		
	}
	cout<<c;
}
