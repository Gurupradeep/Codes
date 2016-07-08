#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,a[100002],b[100002],c[100002];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        b[i]=c[i]=1;
    for(int i=n-2;i>=0;i--)
        {
          if(a[i]>a[i+1])
              b[i]=b[i+1]+1;
    }
    for(int i=1;i<=n-1;i++)
        {
          if(a[i]>a[i-1])
              c[i]=c[i-1]+1;
    }
    long long ans=0;
    for(int i=0;i<n;i++)
        {
          ans+=max(b[i],c[i]);
    }
    cout<<ans;



    return 0;
}
