#include <iostream>
#include<algorithm>
#include<map>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<vector>
using namespace std;

int main()
{
    int n,i,a;
    vector<int>v;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(i=0;i<n;i++)
    {
        printf("%d\n",v[i]);

    }
}
