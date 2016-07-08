#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int gcd(int a, int b)
{
    while(b) b ^= a ^= b ^= a %= b;
    return a;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--)
        {
            int l,b;
            cin>>l>>b;
             int g=gcd(l,b);
                       cout<<(l*b)/(g*g)<<endl;

    }
    return 0;
}
