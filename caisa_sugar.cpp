#include<bits/stdc++.h>
using namespace std;
 
 int b[105];
 int main()
 {
 	int n,s,x[105],y[105],i,flag=0,k=0;
 	cin>>n>>s;
 	for(i=0;i<n;i++)
 	{
 		cin>>x[i]>>y[i];
	 }
	// a=100;
	for(i=0;i<n;i++)
	{
		if(s>x[i])
		{
			if(y[i]!=0)
			{
				b[k]=100-y[i];
				flag=1;
				k++;
			}
			
			else
			{
				b[k]=0;
				flag=1;
				k++;
			}
		}
		else 
		{
			if(s==x[i] && y[i]==0)
			{
				b[k]=0;
				flag=1;
				k++;
			}
		}
	//	cout<<b[k-1]<<endl;
		//cout<<a<<endl;
	}
	
	if(flag==0)
	cout<<-1;
	else
	cout<<*max_element(b,b+105);
	
	
 }
