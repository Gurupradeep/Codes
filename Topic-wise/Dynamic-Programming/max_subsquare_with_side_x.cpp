//Max Sub Square with the side as X


#include <bits/stdc++.h>

using namespace std;

int main()
{
	char a[100][100];
	int m,n;
	cin>>m>>n;

	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
			cin>>a[i][j];

	int hor[100][100];
	int ver[100][100];

	if(a[1][1] == '0')
	{
		hor[1][1] = 0;
		ver[1][1] = 0;
	}
	else
	{
		hor[1][1] = 1;
		ver[1][1] = 1;
	}

	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i][j] == '0')
			{
				hor[i][j] = 0;
				ver[i][j] = 0;
			}
			else
			{
				hor[i][j] = (j==1) ? 1 : hor[i][j-1] + 1;
				ver[i][j] = (i==1) ? 1 : ver[i-1][j] + 1;
			}
		}
	}

	//Intialize result
	int maxi = 1;


	for(int i=m;i>=1;i--)
	{
		for(int j=n;j>=1;j--)
		{
			int small = min(hor[i][j],ver[i][j]);


			while(small>maxi)
			{
				if(ver[i][j-small+1] >= small && hor[i-small+1][j] >=small)
				{
					maxi = small;
				}
				small--;
			}
		}
	}

	cout<<maxi<<endl;	



}