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
    long long t;
    cin>>t;
    fib[1]=1;
    fib[2]=2;
    for(int i=3;i<=1002;i++)
        fib[i]=fib[i-1]+fib[i-2];
    for(int j=0;j<t;j++)
    {
        long long n;
        cin>>n;
        int i=1;
        while(!(n>=fib[i]&&n<fib[i+1]))
            i++;
        cout<<i<<endl;
    }
}
