#include <iostream>
#include<cstdio>
using namespace std;
int dp[1000003];
int main()
{
    int k,l,m;
    cin>>k>>l>>m;
    char a[100];

    for(long long  i=0;i<=1000000;i++)
        dp[i]=0;
    dp[1]=1;
    dp[k]=1;
    dp[l]=1;
    for(long long  i=2;i<=1000000;i++)
    {
        if(dp[i-1]==0)
            dp[i]=1;
        else if(i-l>=1&&dp[i-l]==0)
                dp[i]=1;
        else if(i-k>=1&&dp[i-k]==0)
                dp[i]=1;

    }
    for(int i=1;i<=m;i++)
    {
        long long n;
        cin>>n;
        //for(int i=1;i<=n;i++)
            //cout<<dp[i]<<endl;
        if(dp[n]==1)
            a[i]='A';
        else
            a[i]='B';
    }
     for(int i=1;i<=m;i++)
        cout<<a[i];
    cout<<endl;
}
