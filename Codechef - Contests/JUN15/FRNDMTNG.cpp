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
    long t;
    long long T1,T2,t1,t2,a,b,c;
    float p;
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%lld %lld",&T1,&T2);
        scanf("%lld %lld",&t1,&t2);
        a=T1*T2;
        if(t1>=T2 && t2>=T1)
        {
            printf("1.000\n");
            continue;
        }
        if(T1==T2)
        {
            if(t1>=T2  && t2<=T1)
            {
                p=(a-(.5*(T1-t2)*(T1-t2)))/a;
            }
            if(t1<=T2  && t2>=T1)
                p=(a-(.5*(T2-t1)*(T2-t1)))/a;
            if(t1<=T2  && t2<=T1)
                p=(a-((0.5*(T1-t1)*(T1-t1))+.5*(T1-t2)*(T1-t2)))/a;
        }
        b=T1-t2;
            c=T2-t1;
            if(b<0)
                b=0;
            if(c<0)
                c=0;
        if(T1>T2)
        {

            if(T1>T2+t2)
            {
                p=(a-(.5*(c)*(c)+(T1-T2-t2)*T2+.5*T2*T2))/a;
            }
            else
                p=(a-(.5*(c)*(c)+.5*(b)*(b)))/a;
        }

        if(T2>T1)
        {

            if(T2>T1+t1)
            {
                p=(a-(.5*(b)*(b)+(T2-T1-t1)*T1+.5*T1*T1))/a;
            }
            else
                p=(a-(.5*(c)*(c)+.5*(b)*(b)))/a;
        }
    printf("%f\n",p);
    }

    return 0;
}
