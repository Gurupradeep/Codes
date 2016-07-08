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
    int t,n,b,q;
    cin>>t;
    while(t--)
        {
           cin>>n>>b>>q;

            while(q--)
                {
                   int l,m;
                   scanf("%d %d",&l,&m);
                   if(b>=l&&b<=m)
                       {
                         b=m-(b-l);
                   }
            }
          cout<<b<<endl;
    }
}
