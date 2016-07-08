#include<bits/stdc++.h>
using namespace std;
long long a[300005];

int main()
{
    long long m;
    long long n;
    long long s=0;
    long long  p=0;
    long long maxi=0;
    cin>>n>>m;
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
        if(s+a[i]<=m)
        {
            s=s+a[i];
            if(s>maxi)
                maxi=s;
        }
        else
        {
            while(p<=i&&s+a[i]>m)
            {
                s=s-a[p];

                p++;
            }
            s+=a[i];
            if(s>maxi)
                maxi=s;

        }
    }
    cout<<maxi<<endl;
}

