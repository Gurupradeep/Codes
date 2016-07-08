#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a[100002];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
     long long count=0;
//   cout<<*(min_element(a,a+n));
    while(*(min_element(a,a+n))<0)
        {
            for(int i=1;i<n-1;i++)
                {
                   if(a[i]<0)
                       {
                           a[i]=abs(a[i]);
                           a[i-1]=a[i-1]-abs(a[i]);
                           a[i+1]=a[i+1]-abs(a[i]);
                           count++;
                   }
            }
                   if(a[0]<0)
                       {
                           a[0]=abs(a[0]);
                           a[1]=a[1]-abs(a[0]);
                           a[n-1]=a[n-1]-abs(a[0]);
                           count++;
                   }
                   if(a[n-1]<0)
                       {
                           a[n-1]=abs(a[n-1]);
                           a[0]=a[0]-abs(a[n-1]);
                           a[n-2]=a[n-2]-abs(a[n-1]);
                           count++;
                   }
            }

    cout<<count<<endl;
    return 0;
}
