#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
     int t,n,k,max,ans;
     cin>>t;
     while(t--)
         {
            max=0;
            cin>>n>>k;
            if(n==1)
                cout<<"0"<<endl;
            else
                {
                    for(int i=2;i<=k;i++)
                        {
                           int mod=n%i;
                           if(mod>max)
                               {
                                  max=mod;
                           }
                    }
            }
           cout<<max<<endl;
     }


    return 0;
}
