#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    long long n,a,b,fib,sum;
    cin>>t;
    while(t--)
        {
        cin>>n;
        a=1;
        b=2;
        sum=2;
        fib=a+b;
        do
            {
               a=b;
               b=fib;
               fib=a+b;
               if(fib>n)
                   break;
               if(fib%2==0)
                   sum=sum+fib;


        }
        while(fib<n);
        cout<<sum<<endl;
    }
    return 0;
}
