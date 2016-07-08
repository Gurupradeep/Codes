#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int isprime(long long n)
    {
       int flag=1;
       for(long long j=2;j*j<=n;j++)
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
            long long a[10000];
            a[0]=0;
            a[1]=2;
            a[2]=3;
            int count=2;
            long long i=5;
            while(count<=1002)
                {
                      if(isprime(i)==1)
                      {
                          count++;
                          a[count]=i;
                      }
                       i=i+2;
            }
           int t;
           cin>>t;
           while(t--)
               {
                   int n;
                   cin>>n;
                   cout<<a[n]<<endl;
           }


    return 0;
}
