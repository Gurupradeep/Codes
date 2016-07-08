#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int isprime(long long  n)
    {
       if(n==1)
           {
             return 0;

       }
       if(n==2)
           {
             return 1;

       }
       int flag=1;
       for(int j=2;j*j<=n;j++)
           {
              if(n%j==0)
                  {
                    flag=0;
                    break;
              }
       }
      if(flag)
          return 1;
      else
          return 0;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--)
        {
          long long m,n;
          cin>>m>>n;
          for(long long i=m;i<=n;i++)
              {
                if(isprime(i)==1)
                    cout<<i<<endl;

          }
          cout<<endl;
    }
    return 0;
}
