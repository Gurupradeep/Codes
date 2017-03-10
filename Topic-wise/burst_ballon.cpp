#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	int a[1000];

	cin>>n;

	for(int i=1;i<=n;i++)
		cin>>a[i];

	int dp[1000][1000];
	a[0] = 1;
	a[n+1] = 1;


	//Intialising dp array by filling values for interval of length 1


	dp[1][1] = a[1]*a[2];
	dp[n]][n] = a[n-1]*a[n];
    memset(dp,100000000,sizeof(dp));
    cout<<dp[100][100];
/*	for(int i=2;i<n;i++)
		dp[i][i] = a[n-1]*a[n]*a[n+1];

	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=n-i+1;j++)
		{
			int right = j+i-1;
			for(int k=j;k<=right;k++)
			{
				if(k==j)
					dp[j][right] = 
			}
		}
	}*/
}