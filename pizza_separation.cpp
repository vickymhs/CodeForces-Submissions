#include<bits/stdc++.h>
using namespace std;
int a[365],i,n,mini=1e9,d,k;

int subsetSums(int arr[], int l, int r, int sum=0)
{
    // Print current subset
    if (l > r)
    {
    	d=abs(360-sum-sum);
    	//cout<<d<<endl;
    	if(d<mini)
    	{
    		mini=d;
		}
        //cout << sum << " "<<mini<<endl;
        return mini;
    }
 
    // Subset including arr[l]
    k=subsetSums(arr, l+1, r, sum+arr[l]);
 
    // Subset excluding arr[l]
    k=subsetSums(arr, l+1, r, sum);
}

int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	k=subsetSums(a, 0, n-1);
	cout<<k;
}
