#include<bits/stdc++.h>
using namespace std;
long long int n,i,j,h,e,l,o;
string s;
vector <int> v;
int main()
{
	cin>>s;
	for(i=0;i<s.length();i++)
	{
		if(s[i]=='h' && h<1)
		{
			v.push_back(i);
			h++;
		}
		else if(s[i]=='e' && e<1 && h==1)
		{
			v.push_back(i);
			e++;
		}
		else if(s[i]=='l' && l<2 && e==1 && h==1)
		{
			v.push_back(i);
			l++;
		}
		else if(s[i]=='o' && o<1 && e==1 && h==1 && l==2)
		{
			v.push_back(i);
			o++;
		}	
	}
	if(v.size()==5)
	cout<<"YES";
	else cout<<"NO";
}
