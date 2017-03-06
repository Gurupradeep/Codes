#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;

	int a[10000];

	for(int i=0;i<n;i++)
		cin>>a[i];

	table[1000][1000];

	for (int gap = 0; gap < n; ++gap)
    {
        for (int i = 0, int j = gap; j < n; ++i, ++j)
        {
           int x = ((i+2) <= j) ? table[i+2][j] : 0;
           int y = ((i+1) <= (j-1)) ? table[i+1][j-1] : 0;
           int z = (i <= (j-2))? table[i][j-2]: 0;
 
            table[i][j] = max(a[i] + min(x, y), a[j] + min(y, z));
        }
    }
    cout<<table[0][n-1]<<endl;

}