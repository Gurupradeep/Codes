#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main()
{
    int t;
    long long s;
    cin>>t;
    while(t--)
    {
        long long n,h;
        vector<long long > a;
        vector<long long > b;
        vector<long long> c;
        scanf("%lld %lld",&n,&h);
        s=0;
        for(int i=0;i<n;i++)
            b.push_back(0);
        for(int i=0;i<n;i++)
        {
            long long  l,r;
            scanf("%lld %lld",&l,&r);
            b[l]++;
            if(r!=n-1)
                b[r+1]--;

        }

        for(int i=0;i<n;i++)
        {
            s+=b[i];
            a.push_back(s);
        }
        c.push_back(0);
        for(int i=1;i<=n;i++)
            c.push_back(c[i-1]+a[i-1]);
        long long MAX=c[h];
        for(int i=1;i<=n-h;i++)
        {
            MAX=max(MAX,c[i+h]-c[i]);

        }
        cout<<n*h-MAX<<endl;

    }

}
