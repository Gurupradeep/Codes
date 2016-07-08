#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int>v;
    int x;
    long long n,i;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
        {
           scanf("%d",&x);
        v.push_back(x);
    }
    for(i=0;i<100;i++)
        {
        printf("%lld\t",count(v.begin(),v.end(),i));
    }
    return 0;
}
