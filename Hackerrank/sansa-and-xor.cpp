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
    int h[100002];
    while(t--)
        {
            long long a[100002];
            int n;
            cin>>n;
            for(int i=1;i<=n;i++)
                cin>>a[i];

            for(int i=1;i<=n;i++)
                h[i]=0;
           int l=0;
            int r=n-1;
            for(int i=1;i<=n;i++)
                {
                    //cout<<l<<" "<<r<<endl;
                   // cout<<l*r+1+l+r<<endl;
                    if(((l*r+1+l+r)%2)==1)
                        {
                            h[i]=1;
                        }
                     l++;
                    r--;
            }
            //for(int i=1;i<=n;i++)
                //cout<<h[i]<<endl;
            long long ans=0;
            for(int i=1;i<=n;i++)
                {
                    if(h[i]==1)
                        ans=ans^a[i];
            }
            cout<<ans<<endl;

    }
    return 0;
}
