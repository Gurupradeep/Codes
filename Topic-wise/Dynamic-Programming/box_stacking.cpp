#include<bits/stdc++.h>
using namespace std;

vector< pair<int , pair<int , int > > >v;

bool compare(const pair<int, pair<int, int > > &i, const pair< int, pair< int, int > >&j)
{
	return i.second.first*i.second.second < j.second.first*j.second.second;
}

void get_combinations(int a,int b, int c)
{	
	int maxi = max(max(a,b),c);
	int mini = min(min(a,b),c);
	int mid = (a+b+c) -(mini+maxi);
	v.push_back(make_pair(mini,make_pair(mid,maxi)));
	v.push_back(make_pair(mid,make_pair(mini,maxi)));
	v.push_back(make_pair(maxi,make_pair(mini,mid)));

}

int main()
{
	int n;
	int a[100],b[100],c[100];
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i]>>c[i];
	}
	
	for(int i=1;i<=n;i++)
		get_combinations(a[i],b[i],c[i]);

	sort(v.begin(),v.end(),compare);
	int dp[10000];


	int m = v.size();
//	cout<<"size is "<<m<<endl;
	for(int i=0;i<m;i++)
	{
		dp[i] = v[i].first;
	}
/*	cout<<"Before"<<endl;
	for(int i=0;i<m;i++)
	{
		cout<<dp[i]<<endl;
	}*/
   /* for(int i=0;i<m;i++)
	{
		cout<<"box "<<v[i].first<<" "<<v[i].second.first<<" "<<v[i].second.second<<endl;
	}*/
	for(int i=1;i<m;i++)
	{
		for(int j=0;j<i;j++)
		{
			if((v[i].second.first > v[j].second.first) &&(v[i].second.second > v[j].second.second))
				dp[i] = max(dp[j] + v[i].first, dp[i]);
		}
	}
	/*cout<<"After"<<endl;
	for(int i=0;i<m;i++)
	{
		cout<<dp[i]<<endl;
	}*/

	cout<<*max_element(dp,dp+m)<<endl;

}