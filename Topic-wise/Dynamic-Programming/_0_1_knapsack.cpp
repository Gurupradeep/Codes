#include<bits/stdc++.h>

using namespace std;

int main()
{
	int w[100];
	int v[100];
	int t[100][200];
	int total;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>w[i]>>v[i];
	}
	cin>>total;
	for(int i=1;i<=n;i++)
	{
		t[i][0] = 0;
	}
	t[0][0] = 0;
	for(int i = 1;i<=n;i++)
	{
		for(int j=1;j<=total;j++)
		{
			if(j<w[i])
				t[i][j] = t[i-1][j];
			else
				t[i][j] = max(t[i-1][j], t[i-1][j-w[i]] + v[i]);
		}
	}
	cout<<t[n][total]<<endl;
}