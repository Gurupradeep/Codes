#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,q;
    scanf("%lld %lld",&n,&q);
    int a[100006];
    int sum[100006];
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    sum[0] = 0;
    for(int i=1;i<=n;i++)
    {
        sum[i] = sum[i-1]+a[i];
    }
    while(q--)
    {
        int x,y,k;
        scanf("%d %d %d",&x,&y,&k);
        int ans = 0;
        for(int i=x+1;i<=y+1;i++)
        {
            int temp =0;
            for(int j=i;j<=y+1;j++)
            {
                temp = (sum[i]-sum[j-1])%2 + temp;
            }
            if(temp <(i-y+1)/2 && k>0)
            {
                ans = ans + (i-y+1-temp);
                k--;
            }
            else
            {
                ans = ans + temp;
            }
        }
        cout<<ans<<endl;

    }

}
