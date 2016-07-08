#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a[100002],n,c,j,ans=1;
    cin>>n;
    for(int i=0;i<n;i++)
        {
          scanf("%d",&a[i]);
    }
    sort(a,a+n);
    c=0;
    j=1;
    while(j<=n-1)
        {
           if(a[j]<=a[c]+4)
               {
                  j++;

           }
           else
               {
                  ans++;
                   c=j;
           }
    }
    printf("%d\n",ans);

}
