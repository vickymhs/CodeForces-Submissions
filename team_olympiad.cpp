	#include<bits/stdc++.h>
	using namespace std;
	long long int n,i,x,a[4],d;
	vector<int>pos[3];
	//string
	#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int main()
	{
		fastread;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>x;
			if(x==1)
				pos[0].push_back(i+1);
			else if(x==2)
				pos[1].push_back(i+1);
			else if(x==3)
				pos[2].push_back(i+1);
			a[x]++;
		}
		d=*min_element(a+1,a+4);
		cout<<d<<endl;
		for(i=0;i<d;i++)
		{
			cout<<pos[0][i]<<" "<<pos[1][i]<<" "<<pos[2][i]<<endl;
		}
		return 0;
	}
