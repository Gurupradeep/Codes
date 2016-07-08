#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b,c;
    cin>>a>>b>>c;
    while(!((a==0&&b==0)&&c==0))
        {
           if(abs(a-b)==abs(b-c))
               printf("AP %d\n",c+c-b);
           else
                printf("GP %d\n",c*(c/b));
          cin>>a>>b>>c;


    }
    return 0;
}
