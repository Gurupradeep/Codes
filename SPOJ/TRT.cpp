#include <iostream>
#include<cstdio>
using namespace std;
int dp[2001][2001];
int a[2001];
int calculate(int start , int end , int year)
{
    if(start > end)
        return 0;
    if(dp[start][end] != -1)
        return dp[start][end];
    return (dp[start][end] = max(calculate(start + 1 , end , year+1) + year * a[start] , calculate(start, end - 1 , year+1) + a[end]*year));
}
int main()
{
    int i,n,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            dp[i][j]=-1;
    }
    for(int i = 0 ; i < n ; i++)
        scanf("%d",&a[i]);
    printf("%d\n",calculate(0 , n-1 , 1));
    return 0;
}
