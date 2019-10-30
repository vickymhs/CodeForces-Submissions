#include<bits/stdc++.h>
using namespace std;
long long int n,i,j,a[1000037];
int main()
{
    for(i=2;i<=sqrt(1e6);i++)
    {
        if(!a[i])
        {
            for(j=i*i;j<=1e6;j+=i)
        a[j]=1;
        }
    }
    
    cin>>n;
    i=0;
    j=n-(9-i);
    if(a[j]==0)
    {
        j++;
        i++;
    }
    cout<<j<<" "<<(9-i);
}
