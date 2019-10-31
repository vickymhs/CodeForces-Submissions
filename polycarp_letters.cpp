#include <bits/stdc++.h>
#define ll long long
#define x first
#define y second
using namespace std;
int ans;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	string s;
	cin>>s;
	int i;
	set<char>ss;
	for(i=0;i<n;i++){
		if(s[i]>90){
			ss.insert(s[i]);
			int j;
			j=ss.size();
			ans=max(ans,j);
		}
		else{
			ss.clear();

		}
	}
	int j;
	j=ss.size();
	ans=max(ans,j);
	cout<<ans;
}
