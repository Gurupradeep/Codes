#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long t;
    scanf("%lld",&t);
    while(t--)
        {
            long long n;
            scanf("%lld",&n);
            double i=(-1+sqrt(1+8*n))/2.0;


            if(ceil(i)==floor(i))
                printf("Go On Bob %.0lf\n",ceil(i));
            else
                printf("Better Luck Next Time\n");

    }
    return 0;
}
