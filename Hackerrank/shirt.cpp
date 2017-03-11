#include <bits/stdc++.h>

using namespace std;

int main()
{
	int q;
	scanf("%d",&q);
	while(q--)
	{
		int n;
		scanf("%d",&n);
		vector< int > v;
		for(int i=0;i<n;i++)
		{
			int a;
			scanf("%d",&a);
			v.push_back(a);
		}
		int vendor;
		scanf("%d ",&vendor);
		int small[100000],large[100000];
		for(int i=1;i<=vendor;i++)
			scanf("%d %d",&small[i],&large[i]);

		int low_small[100000],low_large[100000];

		sort(v.begin(),v.end());

		for(int i=1;i<=vendor;i++)
		{
			std::vector<int>::iterator temp1,temp2;
			temp1 = lower_bound(v.begin(),v.end(),small[i]);
			temp2 = upper_bound(v.begin(),v.end(),large[i]);
			low_small[i] = temp1 - v.begin();
			low_large[i] = temp2 - v.begin();
		}
		int count[100000];
		for(int i=0;i<=n+1;i++)
			count[i] = 0;
	/*	cout<<"lower bound"<<endl;
		for(int i=1;i<=vendor;i++)
		{
			cout<<low_small[i]<<" "<<low_large[i]<<endl;
		}*/
		for(int i=1;i<=vendor;i++)
		{
			count[low_small[i]]++;
			count[low_large[i]]--;
		}
		int size[100000];
		size[0] = count[0];
		int ans = 0;
		for(int i=1;i<=n;i++)
		{
			size[i] = size[i-1] + count[i];
		}
		for(int i=0;i<n;i++)
		{
			if(size[i] != 0)
				ans++;
		}
		cout<<ans<<endl;
	}
}