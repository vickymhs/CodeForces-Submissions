#include<bits/stdc++.h>
using namespace std;
string s;
int t;
int pali()
{
	for(int i=0,j=s.length()-1;i<s.length()/2;i++,j--)
	{
		//cout<<s[i]<<" "<<s[j]<<endl;
		if(s[i]!=s[j])
		{
			return 0;
			exit(0);
		}
	}
	return 1;
}
int solve()
{
	int f1=0,f2=0;
	char ch;
	cin>>s;
	f1=pali();
	//cout<<f1<<endl;
	if(f1==0)
	{
		cout<<s<<endl;
		return 0;
	}
	else
	{
		sort(s.begin(),s.end());
		/*ch=s[0];
		s[0]=s[s.length()/2];
		s[s.length()/2]=ch;*/
		//cout<<"----"<<s<<endl;
		f2=pali();
		if(f2==1)
		{
			cout<<-1<<endl;
			return 0;
		}
		else
		cout<<s<<endl;
	}
	s.clear();
	return 0;
}
int main()
{
	cin>>t;
	while(t--)
	solve();
}
