#include<bits/stdc++.h>

using namespace std;
int f[202];
int find(int n)
{
	int count = 0;
	for(int i=0;i<=200;i++)
	{
		if(count == n || count + f[i] >= n)
			return i;
		else
			count = count + f[i];
	}
}
int main()

{
	int n,d;
	int a[200006];

	for(int i=0;i<=200;i++)
		f[i] = 0;
	cin>>n>>d;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=d;i++)
		f[a[i]]++;
	//for(int i= 0;i<=10;i++)
	//	cout<<f[i]<<endl;
	int ans = 0;
	for(int i=d+1;i<=n;i++)
	{
		int low = find(d/2 + d%2);
		int high = find(d/2 + 1);
		if(a[i] >= low+high)
		{
			//cout<<a[i]<<" "<<low<<" "<<high<<endl;
			ans++;
		}
		f[a[i]]++;
		f[a[i-d]]--;
	}
	cout<<ans<<endl;
}