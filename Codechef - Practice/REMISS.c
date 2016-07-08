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
    long a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%ld %ld",&a,&b);
        printf("%ld\t",max(a,b));
        printf("%ld\n",max(a,b)+min(a,b));
    }
    return 0;
}
