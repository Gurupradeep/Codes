#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <string.h>
#include <iostream>
#include <set>
#include <algorithm>
#define len 1e5
using namespace std;

void build_tree(int node,int a,int b)
{
    if(a>b)
        return;
    if(a==b)
    {
        arr[a];
        return;
    }
    build_tree(2*node,a,(a+b)/2);
    build_tree(2*node+1,(a+b)/2+1,b);
    tree[node]=tree[2*node] tree[2*node+1];
}

void update(int node,int a,int b,int i,int j,int val)
{
    if(lazy[node]!=0)
    {
        tree[node]+=lazy[node];
        if(a!=b)
        {
            lazy[2*node]+=lazy[node];
            lazy[2*node+1]+=lazy[node];
        }
        lazy[node]=0;
    }
    if(a>b || a>j || i>b)
    {
        return;
    }
    if(a>=i && j>=b)
    {
        tree[node]+=
        if(a!=b)
        {
            lazy[2*node]+=val;
            lazy[2*node+1]+=val;
        }
        return;
    }
    update(2*node,a,(a+b)/2,i,j,val);
    update(2*node+1,(a+b)/2+1,b,i,j,val);
    tree[node]=
}

int query(int node,int a,int b,int i,int j)
{
    if(a>b || a>j || i>b)
    {

        return
    }
    if(lazy[node]!=0)
    {
        tree[node]+=lazy[node];
        if(a!=b)
        {
            lazy[2*node]+=tree[node];
            lazy[2*node+1]+=tree[node];
        }
        lazy[node]=0;
    }
    if(a>=i && j>=b)
    {
        return tree[node];
    }
    int q1=query(2*node,a,(a+b)/2,i,j);
    int q2=query(2*node+1,(a+b)/2+1,b,i,j);
    return q1,q2;
}

int main() {


    return 0;
}

