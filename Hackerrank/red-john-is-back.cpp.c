#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int isprime(int n)
    {
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
    int s[102],n,t,p[1000000];
    s[0]=0;
    s[1]=s[2]=s[3]=1;
    s[4]=2;
    for(int i=5;i<=40;i++)
        s[i]=s[i-1]+s[i-4];
    p[1]=p[0]=0;
    p[2]=1;
    for(int i=3;i<=1000000;i++ )
        p[i]=p[i-1]+isprime(i);

     cin>>t;
     while(t--)
         {
            cin>>n;
            cout<<p[s[n]]<<endl;
     }

    return 0;
}
