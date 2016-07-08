#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int l,s1,s2,q,a;
    double t;
    cin>>l>>s1>>s2>>q;
    while(q--)
        {
          cin>>a;
          t=abs(sqrt(2)*sqrt(a)-sqrt(2)*l)/1.0*abs(s1-s2);
          cout<<t<<endl;
    }

    return 0;
}
