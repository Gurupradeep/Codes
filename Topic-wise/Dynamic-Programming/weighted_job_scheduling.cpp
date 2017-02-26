#include<bits/stdc++.h>
using namespace std;

vector< pair< pair<int ,int >, int > >p;
int n;
int dp[10000];

//function for sorting according to finishing time
bool compare(const pair< pair<int ,int >, int >&i, const pair< pair<int ,int >, int >&j)
{
	return i.first.second < j.first.second;
}


int latest_non_conflict(int i)
{
	for(int j=i-1;j>=0;j--)
	{
		if(p[j].first.second <= p[i].first.first)
			return j;
	}
	return -1;
}

int main()
{
	
	int w[10000];
	cin>>n;
	int a,b,c;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b>>c;
		p.push_back(make_pair(make_pair(a,b),c));
	}
	sort(p.begin(),p.end(),compare);
	//for(int i=0;i<n;i++)
    //		cout<<p[i].first.first<<" "<<p[i].first.second<<" "<<p[i].second<<endl;

	dp[0] = p[0].second;
	for(int i=1;i<n;i++)
	{
		int temp;
		temp = p[i].second;
		int temp1 = latest_non_conflict(i);
		if(temp1!=-1)
			temp = temp + dp[temp1];
		dp[i] = max(temp,dp[i-1]);
	}
	cout<<dp[n-1]<<endl;


}