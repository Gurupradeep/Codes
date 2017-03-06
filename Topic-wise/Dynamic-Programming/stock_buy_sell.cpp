//Buy and sell stocks with at max k transcations

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int profit[100][1000];
	int price[1000];
	int n;
	int k;
	cin>>n;
	cin>>k;
	for(int i=1;i<=n;i++)
		cin>>price[i];
	for(int i=1;i<=n;i++)
		profit[0][i] = 0;
	for(int i=1;i<=k;i++)
		profit[i][1] = 0;
	for(int i=1;i<=k;i++)
	{
		for(int j=2;j<=n;j++)
		{
			for(int k=1;k<j;k++)
				profit[i][j] = max(profit[i][j-1],price[j]-price[k] + profit[i-1][k]);

		}
	}
	cout<<profit[k][n]<<endl;
}