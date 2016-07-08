#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long n,m;
        scanf("%lld %lld",&n,&m);
        int a[20003];
        for(int i=0;i<m;i++)
            scanf("%d",&a[i]);
        sort(a,a+m);
        int i=0;
        int j=m-1;
        int c=0;
        if(m==1)
        {
            printf("0\n");
            continue;
        }
        while(1)
        {
            if(j==i+1)
            {
                c+=1;
                break;
            }
            else if(i==j)
                break;
            else
            {
                if(a[i]==1)
                {
                    i++;
                    j--;
                    c++;
                }
                else
                {
                    j--;
                    a[i]--;
                    c++;
                }
            }
        }

        printf("%d\n",c);

    }
}
