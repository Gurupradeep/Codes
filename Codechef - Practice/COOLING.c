#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,a[102],b[102],n;
    cin>>t;
    while(t--)
        {
          cin>>n;
          for(int i=0;i<n;i++)
              cin>>a[i];
        for(int i=0;i<n;i++)
              cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        int i=0;
        int j=0;
        int count=0;
        while(j<n)
            {
               if(a[i]<=b[j])
               {
                   count++;
                   i++;
                   j++;
               }
               else
                   j++;
        }
        cout<<count<<endl;





    }
    return 0;
}
