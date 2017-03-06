#include <bits/stdc++.h>

using namespace std;


int main()
{

	int a[10000];
	int jumps[1000];

	int n;
	cin>>n;

	for(int i=1;i<=n;i++)
		cin>>a[i];

	jumps[1] = 0;
	for(int i=2;i<=n;i++)
		jumps[i] = 10000006; 

	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<i;j++)
		{
			if(j+a[j]>=i)
				jumps[i] = min(jumps[i],jumps[j]+1);
		}
	}
	//for(int i=2;i<=n;i++)
	//		cout<<jumps[i]<<endl;
	cout<<jumps[n]<<endl;
}