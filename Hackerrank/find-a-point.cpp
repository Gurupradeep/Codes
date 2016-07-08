#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,x,y,p,q;
    scanf("%d",&t);
    while(t--)
    {
        cin>>x>>y>>p>>q;
            printf("%d %d\n",2*p-x,2*q-y);

    }

    return 0;
}
