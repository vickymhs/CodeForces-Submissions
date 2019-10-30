#include<bits/stdc++.h>
using namespace std;
long long int n,i,a[300005],j,pos,s,mini=INT_MAX,posi=0;
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	
	for(i=0;i<n-1;i++)
	{
		s=fabs(a[i]-a[i+1]);
		//mini=min(s,mini);
		
		if(mini==s)
		{
			pos++;
		}
		else
		{
			if(s<mini)
			{
				pos=1;
				mini=s;
			}
			
		}
		
	//	cout<<s<<" "<<mini<<" "<<pos<<endl;
	}
	
	cout<<mini<<" "<<pos;
	
}
