#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int x;
    long long n,i;
    vector<int>v;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
        {
           scanf("%d",&x);
            v.push_back(x);

    }

    sort(v.begin(),v.end());
    for(i=0;i<n;i++)
        {
           printf("%d\t",v[i]);
    }
    return 0;
}
