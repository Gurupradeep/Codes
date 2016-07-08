#include <iostream>
#include <iostream>
#include<algorithm>
#include<map>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<vector>
using namespace std;
int main()
{
    int t;
    long long n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        if(n%2==0)
            printf("%lld\n",n);
        else
            printf("%lld\n",n-1);

    }
}
