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
            long long n,k;
            cin>>n>>k;
            int a[100006];
            int p=0;
            int q=0;
            for(int i=0;i<n;i=i+2)
                {
                    a[i]=n-1-p;
                    p++;
            }
            for(int j=1;j<n;j=j+2)
                {
                    a[j]=q;
                    q++;
            }
            for(int i=0;i<n;i++)
                {
                    if(a[i]==k)
                        {
                            cout<<i<<endl;
                            break;
                    }
            }

    }
    return 0;
}
