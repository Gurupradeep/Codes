#include<bits/stdc++.h>
using namespace std;

int main()
{
	stack< int >s;
	int a[10000];
	int n;
	cin>>n;
	int i;
	for(int j=1;j<=n;j++)
		cin>>a[j];
	i = 0;
	int ans = 0;
	int area_at_top = 0;
	while(i<=n)
	{
		if(s.empty() || a[s.top()] <= a[i])
			s.push(i++);
		else
		{
			int top = s.top();
			s.pop();
			area_at_top = a[top]*(s.empty() ? i : i - s.top()-1);

			if(area_at_top > ans)
				ans = area_at_top;
		}
	}
	while(s.empty() == false)
	{
		int top = s.top();
			s.pop();
			area_at_top = a[top]*(s.empty() ? i : i - s.top()-1);

			if(area_at_top > ans)
				ans = area_at_top;
	}
	cout<<ans<<endl;
}
