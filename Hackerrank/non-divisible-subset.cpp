#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int main()
{
    int n,k;
    long long a[100006];
    cin>>n>>k;
    int h[100];
      for(int i=0;i<k;i++)
        h[i]=0;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        h[temp%k]++;
    }
    //int max = 0;
    int flag1 =0;
    if(h[0]>0)
        flag1 = 1;
    int flag2 = 0;
    if(k%2==0&&h[k/2]>0)
        flag2=1;
    int sum = 0;
    for(int i=1;i<=k/2;i++)
    {
        if(h[i]>h[k-i])
            sum+=h[i];
        else
            sum+=h[k-i];

    }
    if(flag1)
        sum = sum + 1;
    if(flag2)
        sum =  sum + 1 - h[k/2];
    printf("%d\n",sum);

}
