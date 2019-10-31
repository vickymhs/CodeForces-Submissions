	#include<bits/stdc++.h>
	using namespace std;
	long long int green,black,purple,x,y,z,i,j,n,f,v1,v2;
	//string
	#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int main()
	{
		fastread;
		cin>>x>>y>>z;
		cin>>green>>purple>>black;
		if(green>=x)
		{
			green-=x;
		}
		else
			f=1;

		v1=green+purple;
		if(v1>=y)
			v1-=y;
		else
			f=1;
		
		v2=v1+black;
		if(v2>=z)
			v2-=z;
		else
			f=1;

		if(f==0)
			cout<<"YES";
		else
			cout<<"NO";

		return 0;
	}
