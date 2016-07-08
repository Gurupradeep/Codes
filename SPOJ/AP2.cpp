#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
     long long t;
     cin>>t;
     while(t--)
         {
             long long sum,a,b,n;
             cin>>a>>b>>sum;
             n=(sum*2)/(a+b);
             long long diff=(b-a)/(n-5);
             long long s=a-2*diff;
             cout<<n<<endl;
             while(n--)
                 {
                    printf("%d\t",s);
                    s=s+diff;
             }
            cout<<endl;

     }

}
