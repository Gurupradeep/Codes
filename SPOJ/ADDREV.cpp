#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int reverse_number(int n)
{
    int r=0, a;
    while(n>=1)
    {
        a=n%10;
        r=r*10+a;
        n=n/10;
    }
    return r;
}

int main()
{
    int t,x,y;

    cin>>t;

    for (int i=0 ; i<t; i++)
    {
        cin>>x;
        cin>>y;

        int r=reverse_number(x);
        int s=reverse_number(y);

        int ans= reverse_number(r+s);
        cout<<ans<<endl;
    }
    return 0;
}
