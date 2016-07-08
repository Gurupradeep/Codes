#include <iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int a[100][100];
int dp[100][100];
int n;
int solve(int i,int j)
{
    if(i>n-1)
        return 0;
    if(dp[i][j]!= -1)
        return dp[i][j];
    else
    {
        dp[i][j]=max(a[i][j]+solve(i+1,j),a[i][j]+solve(i+1,j+1));
         return dp[i][j];
    }
}
int main()
{
    int t,i,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            for(j=0;j<=i;j++)
                scanf("%d",&a[i][j]);
        }
        for(i=0;i<100;i++)
        {
            for(j=0;j<100;j++)
                dp[i][j]=-1;
        }
        printf("%d\n",solve(0,0));
    }
    return 0;
}
