#include <bits/stdc++.h>

using namespace std;
int cat[100000];
int catalan_number(int n)
{
	cat[0] = cat[1] = 1;
	for(int i=2;i<=n;i++)
	{
		cat[i] = 0;
		for(int j=0;j<i;j++)
		{
			cat[i] = cat[i] + (cat[j]*cat[i-j-1]);
		}
	}
	return cat[n];
}
int main()
{
	int n;
	cin>>n;
	cout<<catalan_number(n)<<endl;
}