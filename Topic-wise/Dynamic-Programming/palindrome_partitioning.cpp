#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a;
	cin>>a;
	int n = a.length();

	int dp[1000][1000];
	bool pal[1000][1000];
	for(int i=0;i<n;i++)
	{	
		pal[i][i] = true;
		dp[i][i] = 0;
	}
	for(int i=2;i<=n;i++)
	{
		for(int j=0;j<n-i+1;j++)
		{
			int k = j+i-1;
			

			if(i==2)
			{
				if(a[j] == a[k])
					pal[j][k] = 1;
				else
					pal[j][k] = 0;
			}
			else
			{
				if(a[j] == a[k] && pal[j+1][k-1])
					pal[j][k] = 1;
				else
					pal[j][k] = 0;
			}

			if(pal[j][k] == 1)
			{
				dp[j][k] = 0;
			}
			else
			{
				dp[j][k] = 100000000;
				for(int p = j;p<k;p++)
					dp[j][k] = min(dp[j][k], dp[j][p]+dp[p+1][j]+1);
			}
		}
	}

//	cout<<dp[0][n-1]<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			printf("%d ",dp[i][j]);
		}
		cout<<endl;
	}
}