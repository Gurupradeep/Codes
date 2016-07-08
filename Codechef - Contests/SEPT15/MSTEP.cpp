#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[250006];
        int b[250006];
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
        {
            int num;
            cin>>num;
            a[num]=i;
            b[num]=j;
        }
        }

        long long ans=0;
       for(int i=1;i<n*n;i++)
        {
            ans=ans+fabs(a[i]-a[i+1])+fabs(b[i]-b[i+1]);
        }
        cout<<ans<<endl;
    }
    return 0;
}
