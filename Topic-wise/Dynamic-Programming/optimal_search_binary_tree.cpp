#include<bits/stdc++.h>

using namespace std;


int main()
{
	int keys[1000];
	int freq[1000];
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		cin>>keys[i]>>freq[i];
	int dp[1000][1000];
	for(int i=1;i<=n;i++)
		dp[i][i] = freq[i];
	int sum[1000];
	sum[0] = 0;
	for(int i=1;i<=n;i++)
		sum[i] = sum[i-1] + freq[i];


	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=n-i+1;j++)
		{
			int k = i+j-1;
			dp[j][k] = 1000000;
			for(int l=j;l<=k;l++)
			{
				int temp = sum[k]-sum[j-1] + ((l>j) ? dp[j][l-1] :0) + ((k>l) ?dp[l+1][k] : 0);
				if(temp<dp[j][k])
					dp[j][k] = temp;
			}
		}
	} 

	cout<<dp[1][n]<<endl;
}