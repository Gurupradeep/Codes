#include<bits/stdc++.h>
using namespace std;
long long n;
long long a[10006],b[10006];
long long tetris(int i,int sum,int flag)
{
    if(flag ==0)
    {
        if(i==n)
        {
             //   cout<<sum;
            if((b[i]+b[i-1]+a[i])==sum)
                return sum;
            else
                return -1;
        }
        else
        {
            long long temp1 = b[i-1]+a[i];
            long long temp2 = b[i-1]+b[i]+a[i];
            long long temp3 = b[i-1]+b[i+1]+a[i];
            long long temp4 = b[i-1]+b[i+1]+b[i]+a[i];
            if(temp1==sum)
                return tetris(i+1,sum,0);
            else if(temp2==sum)
                return tetris(i+1,sum,1);
            else if(temp3==sum)
                return tetris(i+1,sum,2);
            else if(temp4==sum)
                return tetris(i+1,sum,3);
            else
                return -1;
        }
    }
    if(flag == 1)
    {
        if(i==n)
        {
            if(a[i]+b[i]==sum)
                return sum;
            else
                return -1;
        }
        else
        {
            long long temp1 = a[i];
            long long temp2 = b[i]+a[i];
            long long temp3 = b[i+1]+a[i];
            long long temp4 = b[i+1]+b[i]+a[i];
            if(temp1==sum)
                return tetris(i+1,sum,0);
            else if(temp2==sum)
                return tetris(i+1,sum,1);
            else if(temp3==sum)
                return tetris(i+1,sum,2);
            else if(temp4==sum)
                return tetris(i+1,sum,3);
            else
                return -1;

        }
    }
    if(flag==2)
    {
        if(i==n)
        {
            if(a[i]+b[i-1]==sum)
                return sum;
            else
                return -1;
        }
        else
        {
            long long temp1 = b[i-1]+a[i];
            long long temp2 = b[i-1]+a[i]+b[i+1];
           // long long temp3 = b[i+1]+a[i];
           // long long temp4 = b[i+1]+b[i]+a[i];
            if(temp1==sum)
                return tetris(i+1,sum,0);
            else if(temp2==sum)
                return tetris(i+1,sum,3);
            else
                return -1;

        }
    }
    if(flag==3)
    {

        if(i==n)
        {
            if(a[i]==sum)
                return sum;
            else
                return -1;
        }
        else
        {
            long long temp1 = a[i];
            long long temp2 = a[i]+b[i+1];
            if(temp1==sum)
                return tetris(i+1,sum,1);
            else if(temp2==sum)
                return tetris(i+1,sum,3);
            else
                return -1;
        }
    }
}
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        scanf(" %lld",&n);
        for(int i=1;i<=n;i++)
            scanf(" %lld",&b[i]);
        for(int i=1;i<=n;i++)
            scanf(" %lld",&a[i]);
        if(n==1)
            printf("%lld\n",a[1]+b[1]);
        else
        {
            long long p = tetris(2,a[1],0);
            long long q = tetris(2,a[1]+b[1],1);
            long long r = tetris(2,a[1]+b[2],2);
            long long s = tetris(2,a[1]+b[1]+b[2],3);
         //   cout<<p<<" "<<q<<" "<<r<<" "<<s<<endl;
            long long ans = max(max(p,q),max(r,s));
            printf("%lld\n",ans);
        }
    }
}
