#include<bits/stdc++.h>
using namespace std;
long long dp[1006][1006];
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        long long a[1006];
        for(int i=1;i<=n;i++)
            scanf("%lld",&a[i]);

        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                dp[i][j] = 0;
        int zero_col[1006];
        for(int i=1;i<=n;i++)
            zero_col[i] = 0;
        long long ans = 0;
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                if(a[i]==a[j])
                {
                    zero_col[j] = i;
                }
                else
                    dp[i][j] = dp[i][j-1] + 1;
            }
            for(int p=i+1;p<=n;p++)
            {
                dp[i][p] = dp[i][p]*(i-zero_col[p]);
                 ans+= dp[i][p];
            }
        }
        cout<<ans<<endl;
    }
}
