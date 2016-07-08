#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,a[100002];
    cin>>n;
    while(n!=-1)
        {
          int sum=0;
            for(int i=0;i<n;i++)
                {
                  cin>>a[i];
                  sum=sum+a[i];

            }
           if(sum%n!=0)
               {
                  cout<<"-1"<<endl;
                  cin>>n;
                  continue;
           }
          else
              {
                 long long ans=0;
                  for(int i=0;i<n;i++)
                {
                   ans+=max(0,a[i]-sum/n);

            }
              cout<<ans<<endl;
              cin>>n;

          }



    }
    return 0;
}
