#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int coins[100];
	for(int i=1;i<=n;i++)
		cin>>coins[i];
	int total;
	cin>>total;
	int num[10000];
	num[0] = 0;
	for(int i=1;i<=total;i++)
		num[i] = 100006;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=total;j++)
		{
			if(coins[i]<=j)
			{
				num[j] = min(num[j],num[j-coins[i]]+1);
			}
		}
	}
	cout<<num[total]<<endl;
}