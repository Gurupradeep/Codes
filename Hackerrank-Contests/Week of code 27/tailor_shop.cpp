#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,p;
	int a[100006];
	cin>>n>>p;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	int min = 1;
	int ans = 0;
	for(int i=0;i<n;i++)
	{
		if(min*p >= a[i])
		{
			//cout<<"1"<<min<<endl;
			ans = ans + min;
			min = min+1;
		}
		else
		{
			min = ceil((a[i]*1.0)/p);
			//cout<<"2"<<min<<endl;
			ans = ans + min;
			min = min + 1;
		}
	}

	cout<<ans<<endl;
}