#include<bits/stdc++.h>

using namespace std;


int main()
{
	int n;
	cin>>n;
	int cut[10000	];
	for(int i=1;i<=n;i++)
	{
		cin>>cut[i];
	}
	int cost[1000];
	cost[0] = 0;
	for(int i=1;i<=n;i++)
	{
		cost[i] = -1;
		for(int k=1;k<=i;k++)
		{
			int temp = cut[k] + cost[i-k];
			if(temp>cost[i])
				cost[i] = temp;
		}
	}
	cout<<cost[n]<<endl;
}