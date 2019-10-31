#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
#define x first
#define y second
#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define PI (atan(1)*4)
#define mp make_pair
using namespace std;

int main()
{
	fastread;
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n);
	if((arr[n-1]-arr[0])<2){
		cout<<n<<'\n';
		for(int i=0;i<n;i++)
			cout<<arr[i]<<' ';
		return 0;
	}	
	int mini=0,maxi=0,mid=0;
	int ptr=0;
	while(arr[ptr]==arr[0]){
		ptr++;
		mini++;
	}
	while(arr[ptr]!=arr[n-1]){
		ptr++;
		mid++;
	}
	maxi=n-mini-mid;
	int sel1=0,sel2=0,sel3=0,ans=1e7;
	int sum=mini+2*mid+3*maxi;
	for(int i=0;i<=n;i++){
		int rem=sum-i;
		int q,r;
		r=rem-2*(n-i);
		q=3*(n-i)-rem;
		if(q>=0 && r>=0){
			int val=abs(mini-i)+abs(mid-q)+abs(maxi-r);
			val/=2;
			val=n-val;
			// cout<<i<<" dsd "<<q<<"  "<<r<<"  "<<val<<endl;
			if(ans>val){
				// cout<<i<<" "<<q<<" "<<r<<" "<<val<<endl;
				ans=val;
				sel1=i;
				sel2=q;
				sel3=r;
			}
		}
	}
	cout<<ans<<'\n';
	for(int i=0;i<sel1;i++)
		cout<<arr[0]<<' ';
	for(int i=0;i<sel2;i++)
		cout<<arr[0]+1<<' ';
	for(int i=0;i<sel3;i++)
		cout<<arr[0]+2<<' ';
	return 0;
}

