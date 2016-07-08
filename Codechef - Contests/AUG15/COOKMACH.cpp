#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--)
        {
            long long a,b;
            cin>>a>>b;
            long long count=0;
            while(a&(a-1))
                {
                    if(a%2==0)
                    {
                        a=a/2;
                        count++;
                    }
                    else
                        {
                           a=(a-1)/2;
                           count++;
                    }
            }
            while(a!=b)
                {
                   if(a<b)
                   {
                       a=a*2;
                       count++;
                   }
                   else
                       {
                          a=a/2;
                          count++;
                   }
            }
            cout<<count<<endl;

    }
	return 0;

}
