#include <bits/stdc++.h>
#define ll long long
#define x first
#define y second
using namespace std;
const int N=2e5+5;
int a[N],cnt[N];
set<int>fin,miss;
int ans;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,i;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i];
		cnt[a[i]]++;
	}
	for(i=1;i<=n;i++){
		if(cnt[i]==0){
			ans++;
			miss.insert(i);
		}
	}
	for(i=1;i<=n;i++){
		if(cnt[a[i]]>1){
			if(*miss.begin()<a[i]){
				cnt[a[i]]--;
				a[i]=*miss.begin();
				miss.erase(miss.begin());
			}
			else{
				if(fin.find(a[i])!=fin.end()){
					cnt[a[i]]--;
					a[i]=*miss.begin();
					miss.erase(miss.begin());
				}
				else{
					fin.insert(a[i]);
				}
			}
		}
		else{
			continue;
		}
	}
	cout<<ans<<'\n';
	for(i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
