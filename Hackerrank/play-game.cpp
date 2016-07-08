
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

long long a[100002],dp[100002],s[100002];
int main()
    {
       long long t,n;
       cin>>t;
       while(t--)
           {
              cin>>n;
              for(int i=n;i>0;i--)
              {
                  cin>>a[i];

              }

              s[0]=0;
              for(int i=1;i<=n;i++)
                  s[i]=s[i-1]+a[i];
              dp[0]=0;
              dp[1]=a[1];
              dp[2]=dp[1]+a[2];
              dp[3]=dp[2]+a[3];
              for(int i=4;i<=n;i++)
              {
                  dp[i]=max(-1ll,s[i-1]-dp[i-1]+a[i]);
                  dp[i]=max(dp[i],s[i-2]-dp[i-2]+a[i]+a[i-1]);
                  dp[i]=max(dp[i],s[i-3]-dp[i-3]+a[i]+a[i-1]+a[i-2]);
              }
             cout<<dp[n]<<endl;




       }

}
