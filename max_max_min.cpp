	#include<bits/stdc++.h>
	using namespace std;
	long long int n,i,k,j,a[100005];
	
	//string
	int main()
	{
		cin>>n>>k;
		for(i=0;i<n;i++)
			cin>>a[i];
		
		if(k==1)
			cout<<*min_element(a,a+n);
		else if(k==2)
			cout<<max(a[0],a[n-1]);
		else
			cout<<*max_element(a,a+n);
	}
