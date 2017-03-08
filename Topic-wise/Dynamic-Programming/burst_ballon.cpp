#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	int a[1000];

	cin>>n;

	for(int i=1;i<=n;i++)
		cin>>a[i];

	int dp[n+1][n+1];
	a[0] = 1;
	a[n+1] = 1;


	//Intialising dp array by filling values for interval of length 1


	dp[1][1] = a[1]*a[2];
	dp[n][n] = a[n-1]*a[n];
  //  cout<<dp[100][100];
	for(int i=2;i<n;i++)
		dp[i][i] = a[i-1]*a[i]*a[i+1];

	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=n-i+1;j++)
		{
			
			int right = j+i-1;
			dp[j][right] = -1;
			for(int k=j;k<=right;k++)
			{
				if(k==j)
					dp[j][right] = max(dp[j][right],dp[k+1][right] + (a[k]*a[j-1]*a[right+1]));
				else if(k==right)
					dp[j][right] = max(dp[j][right],dp[j][right-1] + (a[k]*a[j-1]*a[right+1]));
				else
					dp[j][right] = max(dp[j][right],dp[j][k-1]+dp[k+1][right]+(a[k]*a[j-1]*a[right+1]));

			}
		}
	}



	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			printf("%d ",dp[i][j]);
		}
		cout<<endl;
	}
	cout<<dp[1][n]<<endl;
}