#include<bits/stdc++.h>

using namespace std;

int main()
{
	int w[100];
	int t[100][1000];
	int total;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>w[i];
	}
	cin>>total;
	for(int i=1;i<=n;i++)
	{
		t[i][0] = 1;
	}
	t[0][0] = 1;
	for(int i = 1;i<=n;i++)
	{
		for(int j=1;j<=total;j++)
		{
			if(j<w[i])
				t[i][j] = t[i-1][j];
			else
				t[i][j] = t[i-1][j] | t[i-1][j-w[i]];
		}
	}
	cout<<t[n][total]<<endl;
}