#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
long long A[1000006];
long long tree[4000006];
//long long lazy[1000006];
void build(int node, int start, int end)
{
    if(start == end)
    {
        // Leaf node will have a single element
        tree[node] = A[start];
    }
    else
    {
        int mid = (start + end) / 2;
        // Recurse on the left child
        build(2*node, start, mid);
        // Recurse on the right child
        build(2*node+1, mid+1, end);
        // Internal node will have the sum of both of its children
        tree[node] = tree[2*node] + tree[2*node+1];
    }
}
void update1(int node, int start, int end, int idx, int val)
{
    if(start == end)
    {
        // Leaf node
        A[idx] += val;
        tree[node] += val;
    }
    else
    {
        int mid = (start + end) / 2;
        if(start <= idx and idx <= mid)
        {
            // If idx is in the left child, recurse on the left child
            update1(2*node, start, mid, idx, val);
        }
        else
        {
            // if idx is in the right child, recurse on the right child
            update1(2*node+1, mid+1, end, idx, val);
        }
        // Internal node will have the sum of both of its children
        tree[node] = tree[2*node] + tree[2*node+1];
    }
    return;
}
void update2(int node, int start, int end, int idx, int val)
{
    if(start == end)
    {
        // Leaf node
        A[idx] -= val;
        tree[node] -= val;
    }
    else
    {
        int mid = (start + end) / 2;
        if(start <= idx and idx <= mid)
        {
            // If idx is in the left child, recurse on the left child
            update2(2*node, start, mid, idx, val);
        }
        else
        {
            // if idx is in the right child, recurse on the right child
            update2(2*node+1, mid+1, end, idx, val);
        }
        // Internal node will have the sum of both of its children
        tree[node] = tree[2*node] + tree[2*node+1];
    }
    return;
}
long long query(int node, int start, int end, int l, int r)
{
    if(r < start or end < l)
    {
        // range represented by a node is completely outside the given range
        return 0;
    }
    if(l <= start and end <= r)
    {
        // range represented by a node is completely inside the given range
        return tree[node];
    }
    // range represented by a node is partially inside and partially outside the given range
    int mid = (start + end) / 2;
    long long p1 = query(2*node, start, mid, l, r);
    long long p2 = query(2*node+1, mid+1, end, l, r);
    return (p1 + p2);
}
int main()
{
    long long n,q;
    scanf("%lld %lld",&n,&q);
    for(long long i=0;i<n;i++)
        scanf("%lld",&A[i]);
    build(1,0,n-1);
    while(q--)
    {
        char temp;
        scanf(" %c",&temp);
        if(temp=='S')
        {
            long long p,q;
            scanf("%lld %lld",&p,&q);
            long long ans=query(1,0,n-1,p,q);
            printf("%lld\n",ans);
        }
        long long index,value;
        if(temp=='G')
        {
              scanf("%lld %lld",&index,&value);
              update1(1,0,n-1,index,value);
        }
        if(temp=='T')
        {
              scanf("%lld %lld",&index,&value);
              update2(1,0,n-1,index,value);
        }

    }
    return 0;
}
