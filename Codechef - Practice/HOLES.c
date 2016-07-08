#include <iostream>
#include<algorithm>
#include<map>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;

int main()
{
    char a[102];
    int t,i,ans;
    scanf("%d",&t);
    while(t--)
    {
        ans=0;
        scanf("%s",a);
        for(i=0;i<strlen(a);i++)
        {
            if(a[i]=='A'||a[i]=='D'||a[i]=='P'||a[i]=='O'||a[i]=='R'||a[i]=='Q')
                ans=ans+1;
             if(a[i]=='B')
                ans=ans+2;

        }
        printf("%d\n",ans);
    }


    return 0;
}
