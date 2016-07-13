#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        long long l,a,n,d;
        scanf("%lld %lld %lld %lld",&l,&a,&n,&d);
        int flag = 0;
        if(d>n)
            flag = 1;
        else if(d>a)
            flag = 1;
        else if(d>l)
            flag = 1;
        else if(l>(n-d+1)*a)
            flag = 1;
        if(!flag)
        {
            long long ans = 0;
            long long items = 0;
            long long price = a+1;
            while(items<l)
            {
                price--;
                items = items + n-d+1;
                if(items<=l)
                {
                    ans = ans +(price)*(n-d+1);
                  //  cout<<ans<<" "<<price<<" "<<items<<endl;
                }
                else
                {
                    items = items - (n-d+1);
                    ans = ans + (l-items)*price;
                    items = items + (n-d+1);
                }

            }
            printf("%lld\n",ans);
        }
        else
        {
            printf("SAD\n");
        }
    }
}
