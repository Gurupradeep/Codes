#include<bits/stdc++.h>
using namespace std;

long long arr[100003];

pair<long long ,long long> tree[400003];

void create(long long ss,long long se,long long node)
{
    if(ss==se)
        {
            tree[node].first=arr[ss];
            tree[node].second=1;
        }
    else
    {
        create(ss,(ss+se)/2,2*node);
        create((ss+se)/2+1,se,2*node+1);
        if(tree[2*node].first>tree[2*node+1].first)
        {
            tree[node].first=tree[2*node].first;
                tree[node].second=tree[2*node].second;
        }
        else if(tree[2*node].first<tree[2*node+1].first)
            {
            tree[node].first=tree[2*node+1].first;
                tree[node].second=tree[2*node+1].second;
        }
        if(tree[2*node].first==tree[2*node+1].first)
            {
             tree[node].first=tree[2*node].first;
            tree[node].second=tree[2*node].second+tree[2*node+1].second;
        }
    }
}
pair<long long,long long> querry(long long ss,long long se,long long node,long long beg,long long end)
{
    if(ss>end or se<beg)
        return make_pair(-1,-1);
    if(ss>=beg and se<=end)
        return tree[node];
    pair<long long,long long> a=querry(ss,(ss+se)/2,2*node,beg,end);
    pair<long long,long long> b=querry((ss+se)/2+1,se,2*node+1,beg,end);
    pair<long long,long long> c;
    if(a.first>b.first)
        {
            c.first=a.first;
                c.second=a.second;
        }
        else if(a.first<b.first)
            {
            c.first=b.first;
                c.second=b.second;
        }
        if(a.first==b.first)
            {
             c.first=a.first;
            c.second=a.second+b.second;
        }
    return c;

}

int main()
{
    long long n,m;
    scanf("%lld%lld",&n,&m);
    for(long long i=1;i<=n;++i)
        scanf("%lld",&arr[i]);
    create(1,n,1);
    long long x,y;
    pair<long long,long long> ans;
    while(m--)
    {
        scanf("%lld %lld",&x,&y);
        ans=querry(1,n,1,x,y);
        printf("%lld\n",ans.second);
        }
    return 0;
}
