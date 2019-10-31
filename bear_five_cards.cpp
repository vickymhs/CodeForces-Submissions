#include<bits/stdc++.h>
using namespace std;
int a[105],i,j,t[5],sum,mini=1000005,v1,v2;
set<int>s;
int main()
{
	for(i=0;i<5;i++)
	{
		cin>>t[i];
		a[t[i]]++;
		sum+=t[i];
		s.insert(t[i]);
	}
	sort(t,t+5);
	if(*max_element(a,a+105)<=1)
	{
		cout<<sum;
		return 0;
	}
	else
	{
		set<int>:: reverse_iterator it=s.rbegin();
		while(it!=s.rend())
		{
			i=*it;
			//cout<<i<<endl;
			if(a[i]>=3)
			{
				mini=sum-(i*3);
				break;
			}
			else if(a[i]==2)
			{
				it++;
				if(it==s.rend())
				{
					mini=sum-(i*2);
					break;
				}
				j=*it;
				it--;
				//cout<<j<<"here\n";
				if(a[j]<=2)
				{
					mini=sum-(i*2);
					break;
				}
				else if(a[j]>=3)
				{
					v1=sum-(i*2);
					v2=sum-(j*3);
					mini=min(v1,v2);
					break;
				}
			}
			it++;
		}
	}
	cout<<mini;
}
