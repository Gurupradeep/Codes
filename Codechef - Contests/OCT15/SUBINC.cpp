#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a[100006];
        for(long long i=1;i<=n;i++)
            cin>>a[i];
        long long temp=1;
        long long ans=0;
        for(long long i=1;i<n;i++)
        {
            if(a[i]<=a[i+1])
                temp++;
            else
            {
                ans+=((temp)*(temp+1))/2;
                temp=1;
            }
        }
        if(a[n-1]<=a[n])
            ans+=((temp)*(temp+1))/2;
        else
            ans++;
        cout<<ans<<endl;

    }
    return 0;
}
