#include<algorithm>
#include<map>
#include<cstdio>
#include <iostream>
#include<cmath>
#include<cstring>
#include<vector>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
        {
           cin>>n;
           if(360%n==0)
               printf("y\t");
           else
               printf("n\t");
          if(n<=360)
              printf("y\t");
          else
              printf("n\t");
         if((n*(n+1))/2<=360)
                 printf("y\n");
         else
             printf("n\n");
    }
}
