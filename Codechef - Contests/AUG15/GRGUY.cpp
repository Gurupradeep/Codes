#include <iostream>
#include <algorithm>
#include <utility>
#include <cstdio>
#include <string.h>
#include<cmath>
using namespace std;

char a[1000000],b[1000000];

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       scanf("%s",a);
       scanf("%s",b);
       int l=strlen(a);
       int c1=0,c2=0,F=1;

        for(int i=0;i<l;i++)
            if(a[i]=='#'&&b[i]=='#')
            {
                cout<<"No"<<endl;
                F=0;
                break;
            }
        if(F==0)
        continue;

       for(int i=0;i<l;i++)
        {
            if(a[i]=='#')
                break;
            else
                c1++;
        }
        for(int i=0;i<l;i++)
        {
            if(b[i]=='#')
                break;
            else
                c2++;
        }

       int flag;
       if(c1>c2)
        flag=0;
       else
        flag=1;

       int ans=0;
       for(int i=max(c1-1,c2-1);i<l-1;i++)
       {
           if(flag==0)
           {
               if(a[i+1]=='#')
               {
                    ans++;
                    flag=1;
               }
            }

            else
            {
               if(b[i+1]=='#')
               {
                    ans++;
                    flag=0;
               }
            }
        }

        cout<<"Yes"<<endl<<ans<<endl;

    }
    return 0;
}
