#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long  t;
    cin>>t;
    while(t--)
        {
          long long m,n;
          cin>>m>>n;
          if(!(m==n ||m==n+2))
              cout<<"No Number"<<endl;
          else
              {
                if(m%2==0)
                    cout<<m+n<<endl;
                else
                    cout<<m+n-1<<endl;
          }
    }
    return 0;
}
