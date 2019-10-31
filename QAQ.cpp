#include<bits/stdc++.h>
using namespace std;
long long c,i,j,k,p,t,n;
vector<long long>q,a;
string s;
int main()
{
	cin>>s;
	for(i=0;i<s.length();i++)
	{
		if(s[i]=='Q')
		q.push_back(i);
		else if(s[i]=='A')
		a.push_back(i);
	}
	//cout<<q.size()<<a.size();
	for(i=0;i<q.size();i++)
	{
		for(j=0;j<a.size();j++)
		{
			//cout<<q[i]<<" "<<a[j]<<endl;
			if(q[i]<a[j])
			{
				t=a[j];
				for(k=i+1;k<q.size();k++)
				{
					if(q[k]>t)
						c++;
				}
			}
		}
	}
	cout<<c;
}
