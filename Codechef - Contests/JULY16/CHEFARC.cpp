#include<bits/stdc++.h>
using namespace std;
long long dp1[106][106];
long long dp2[106][106];
long long n,m;
long long a[102][102];
void calculate_k_points_q1(long long i,long long j,long long dp[][106],long long k)
{
      for(long long p=k;p>=0;p--)
        for(long long q=0;q<=(k-p);q++)
        {
            if((i-p)>=1&&(j+q)<=m)
                dp[i][j] = min(dp[i][j],dp[i-p][j+q]+1);
        }
}
void calculate_k_points_q2(long long i,long long j,long long dp[][106],long long k)
{
    for(long long p=0;p<=k;p++)
        for(long long q=0;q<=(k-p);q++)
        {
             if((i+p)<=n&&(j+q)<=m)
             {
                // cout<<dp[i][j]<<" "<<dp[i+p][j+q]<<endl;
                 dp[i][j] = min(dp[i][j],dp[i+p][j+q]+1);
             }
        }
}
void calculate_k_points_q3(long long i,long long j,long long dp[][106],long long k)
{
    for(long long p=k;p>=0;p--)
        for(long long q=0;q<=(k-p);q++)
        {
            if((i+p)<=n&&(j-q)>=1)
                dp[i][j] = min(dp[i][j],dp[i+p][j-q]+1);

        }
}
void calculate_k_points_q4(long long i,long long j,long long dp[][106],long long k)
{
    for(long long p=k;p>=0;p--)
        for(long long q=0;q<=(k-p);q++)
        {
            if((i-p)>=1&&(j-q)>=1)
                dp[i][j] = min(dp[i][j],dp[i-p][j-q]+1);
        }

}
void distance_calulation1(long long n,long long m,long long dp[][106],long long k)
{
    for(int count_it =0;count_it<4;count_it++)
    {


    for(long long i=1;i<=n;i++)
        for(long long j=1;j<=m;j++)
        {
            if(a[i][j]==0)
                calculate_k_points_q2(i,j,dp,k);
        }
    for(long long i=n;i>=1;i--)
        for(long long j=m;j>=1;j--)
        {
            if(a[i][j]==0)
                calculate_k_points_q4(i,j,dp,k);
        }
    for(long long i=n;i>=1;i--)
        for(long long j=1;j<=m;j++)
        {
            if(a[i][j]==0)
                calculate_k_points_q3(i,j,dp,k);
        }
    for(long long i=1;i<=n;i++)
        for(long long j=m;j>=1;j--)
        {
            if(a[i][j]==0)
                calculate_k_points_q1(i,j,dp,k);
        }
    }
}
void distance_calulation2(long long n,long long m,long long dp[][106],long long k)
{
    for(int count_it = 0;count_it<4; count_it++)
    {


    for(long long i=1;i<=n;i++)
        for(long long j=m;j>=1;j--)
        {
            if(a[i][j]==0)
                calculate_k_points_q1(i,j,dp,k);

        }
         for(long long i=n;i>=1;i--)
        for(long long j=1;j<=m;j++)
        {
            if(a[i][j]==0)
                calculate_k_points_q3(i,j,dp,k);
        }
        for(long long i=n;i>=1;i--)
        for(long long j=m;j>=1;j--)
        {
            if(a[i][j]==0)
                calculate_k_points_q4(i,j,dp,k);
        }
    for(long long i=1;i<=n;i++)
        for(long long j=1;j<=m;j++)
        {
            if(a[i][j]==0)
                calculate_k_points_q2(i,j,dp,k);
        }


    }
}
int main()
{

    long long t;
    scanf(" %lld",&t);
    while(t--)
    {

        long long k1,k2;
        scanf(" %lld %lld %lld %lld",&n,&m,&k1,&k2);
        for(long long i=1;i<=n;i++)
            for(long long j=1;j<=m;j++)
                {
                    scanf(" %lld",&a[i][j]);
                    dp1[i][j] = INT_MAX;
                    dp2[i][j] = INT_MAX;
                }
        dp1[1][1] = 0;
        dp2[1][m] = 0;
         distance_calulation2(n,m,dp2,k2);
        distance_calulation1(n,m,dp1,k1);

        long long ans = INT_MAX ;
        for(long long i=1;i<=n;i++)
            for(long long j=1;j<=m;j++)
            {
                ans = min(max(dp1[i][j],dp2[i][j]),ans);
            }
    /*    for(long long i=1;i<=n;i++)
        {
            for(long long j=1;j<=m;j++)
                cout<<dp1[i][j]<<" ";
            cout<<endl;
        }
        cout<<endl;
        for(long long i=1;i<=n;i++)
        {
            for(long long j=1;j<=m;j++)
                cout<<dp2[i][j]<<" ";
            cout<<endl;
        }*/
        if(ans == INT_MAX)
            printf("-1\n");
        else
            printf("%lld\n",ans);
    }
}
