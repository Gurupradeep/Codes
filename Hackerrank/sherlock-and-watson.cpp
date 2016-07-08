#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,k,q,a[1000002],b[1000002],i,j,c;
    scanf("%d %d %d",&n,&k,&q);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    k=k%n;
    j=0;
    for(i=k;i<n;i++)
        {
           b[i]=a[j];
           j++;

    }
    for(i=0;i<k;i++)
        {
          b[i]=a[j];
           j++;
    }
    for(i=1;i<=q;i++)
        {
           scanf("%d",&c);
           printf("%d\n",b[c]);
    }
    return 0;
}
