#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int s1,s2,s3,s4;
	set<int>a;
	cin>>s1>>s2>>s3>>s4;
	a.insert(s1);
	a.insert(s2);
	a.insert(s3);
	a.insert(s4);
	//cout<<a.size();
	
	cout<<endl<<4-a.size();
}
