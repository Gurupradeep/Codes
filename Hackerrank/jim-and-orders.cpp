#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,i;
    long t,d;
    vector<pair<long,int> >v;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
          scanf("%ld %ld",&t,&d);
           v.push_back(make_pair(t+d,i));
    }
    sort(v.begin(),v.end());
    for(i=0;i<n;i++)
        printf("%d\t",v[i].second);
    v.clear();
    return 0;
}
