#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
long long fib[1004];

int main()
{
    long long t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a=(n*(4+(n-1)*2))/2;
        long long b=(n*(n-1))/2;
        cout<<(a+b)%1000007<<endl;
    }
}
