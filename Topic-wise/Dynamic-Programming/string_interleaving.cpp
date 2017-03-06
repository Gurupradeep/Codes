#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a,b,c;
	cin>>a>>b>>c;
	int m = a.length();
	int n = b.length();

	int dp[1000][1000];

	int match = c.length();

	if(match != m+n)
		printf("False\n");
	else
	{
		for(int i=0;i<=m;i++)
		{
			for(int j=0;j<=n;j++)
			{
				if(i==0 && j==0)
					dp[i][j] = 1;

				else if(i==0 && b[j-1] == c[j-1])
					dp[i][j] = dp[i][j-1];

				else if(j==0 && a[i-1] == c[i-1])
					dp[i][j] = dp[i-1][j];

				else if(a[i-1] == c[i+j-1] && b[j-1]!=c[i+j-1])
					dp[i][j] = dp[i-1][j];

				else if(a[i-1] != c[i+j-1] && b[j-1]==c[i+j-1])
					dp[i][j] = dp[i][j-1];

				else if(a[i-1] == c[i+j-1] && b[j-1] ==c[i+j-1])
					dp[i][j] = dp[i-1][j] || dp[i][j-1];
				else
					dp[i][j] = 0;				

			}
		}
		if(dp[m][n] == 0)
			cout<<"False"<<endl;
		else
			cout<<"True"<<endl;
	}

}