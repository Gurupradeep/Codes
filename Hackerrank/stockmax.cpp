#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long n,a[100000];
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--)
        {

           cin>>n;
           for(int i=0;i<n;i++)
               cin>>a[i];
           long long sum=0;
           long long max=a[n-1];
          for(int i=n-2;i>=0;i--)
               {
                 if(a[i]<max)
                     sum=sum+(max-a[i]);
                 else
                     max=a[i];
           }
          cout<<sum<<endl;
    }
    return 0;
}
