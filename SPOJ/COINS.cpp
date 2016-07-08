#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


long long A[1000000];

long long dp(long long n)
{
    if(n<1000000)
    {
        if(A[n]!=0) return A[n];
    }
    if(n<n/2+n/3+n/4)
    {
        return(dp(n/2)+dp(n/3)+dp(n/4));
    }
    else
    {
        if(n<1000000)
        {
            A[n]=n;
        }
        return n;
    }
}

int main(){
    long long n;
    for(int i=0;i<1000000;i++)
        A[i]=dp(i);
    while(cin>>n){
        cout<<dp(n)<<endl;
    }
    return 0;

}
