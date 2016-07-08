#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
        long long x,y;
        cin>>x>>y;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
           int a;
            cin>>a;
            int flag=0;
           // cout<<a<<endl;
            //cout<<(2*x+2*y-4)%a<<endl;
            if(a==1||a==2)
                {
                    printf("YES\n");
                    continue;
            }
                else if((x%a==0&&y%a==2)||(y%a==0&&x%a==2))
                {
                    printf("YES\n");
                    continue;
                }
               else if((x%a==1&&(y-1)%a==0)||(y%a==1&&(x-1)%a==0))
                {
                    printf("YES\n");
                    continue;
                }
                else
                    printf("NO\n");
        }


    return 0;
}

