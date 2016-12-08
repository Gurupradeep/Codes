#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	int a[100006];
	pair<int, int >p[100006];
	pair<int, int >q[100006];
	cin>>n;
	for(int i = 0;i<n;i++)
	{
		int temp;
		cin>>temp;
		p[i].first = temp;
		p[i].second = i;
		q[i].first = temp;
		q[i].second = i;
	}

	vector<bool> v(n,false);
	vector<bool> vis(n,false);

	int ans = 0;
	int ans1 = 0;
	sort(p,p+n);
	sort(q,q+n);
	reverse(q,q+n);

	for(int i=0;i<n;i++)
	{
		int cycle = 0;
		if(v[i] or p[i].second == i)
			continue;
		else
		{
			int j = i;
			while(!v[j])
			{
				v[j] = 1;

				j = p[j].second;
				cycle ++;

			}
		}

		ans = ans + (cycle -1);

	}
    for(int i=0;i<n;i++)
	{
		int cycle = 0;
		if(vis[i] or q[i].second == i)
			continue;
		else
		{
			int j = i;
			while(!vis[j])
			{
				vis[j] = 1;

				j = q[j].second;
				cycle ++;

			}
		}

		ans1 = ans1 + (cycle -1);

	}

	cout<<min(ans,ans1)<<endl;
}