#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--)
        {
           int n,a[1002],b[1002];
           cin>>n;
           for(int i=0;i<n;i++)
               cin>>a[i];
            for(int i=0;i<n;i++)
               cin>>b[i];
             sort(a,a+n);
             sort(b,b+n);
             long long ans=0;
              for(int i=0;i<n;i++)
                 ans+=a[i]*b[i];
           cout<<ans<<endl;


    }
}
