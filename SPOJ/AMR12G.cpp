#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
//	int a[52][52];
	scanf("%d",&t);
	while(t--)
	{
	
		int a[52];
		char cave[52][52];
		int n,m,k;
		scanf("%d %d %d",&n,&m,&k);
		for(int i=0;i<=n;i++)
			a[i] = 0;
		for(int i = 1;i<=n;i++)
		{
			char ch;
			for(int j=1;j<=m;j++)
			{
		
				cin>>ch;
				if(ch== '*')
				{
					a[i]++;
					//cout<<i<<" "<<j<<endl;
				}
			}
		}

		multiset<int> s;
		for(int i=1;i<=n;i++)
		{
			s.insert(a[i]);
		//	cout<<a[i]<<endl;
		}

		std::multiset<int>::iterator it;
		while(k--)
		{
			it = s.begin();
			int value;
			value = *it;
			s.erase(it);
			int temp = m -value;
			s.insert(temp); 
		}
		long long ans = 0;
		for(it = s.begin();it!=s.end();++it)
			ans = ans+ *it;
		printf("%lld\n",ans);
	}
}