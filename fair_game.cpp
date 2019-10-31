#include <bits/stdc++.h>
#define ll long long
#define x first
#define y second
using namespace std;

int main(){
	//ios::sync_with_stdio(false);
	//cin.tie(0);
	int n,i;
	int a[105];
	map<int,int>m;
	cin>>n;
	set<int>s;
	for(i=1;i<=n;i++){
		int x;
		cin>>x;
		a[i]=x;
		m[x]++;
		s.insert(x);

	}
	if(n%2==0){
		for(i=1;i<=n;i++){
			if(m[a[i]]!=n/2){
				cout<<"NO";
				return 0;
			}
		}
		cout<<"YES"<<'\n';
		cout<<*s.begin()<<" ";
		s.erase(s.begin());
		cout<<*s.begin()<<" ";
	}
	else{
		cout<<"NO";
	}
}
