#include<bits/stdc++.h>

using namespace std;

int main()
{
	vector<int>v;
	int n;
	cin>>n;
	int temp;
	int prev = 0;
	scanf("%d",&temp);
	v.push_back(temp);
	prev = temp;
	for (int i=1;i<n;i++)
	{
		int temp;
		scanf("%d",&temp);
	//	cout<<"temp"<<" "<<temp<<" "<<prev<<endl;
		if(temp!=prev)
		{
			v.push_back(temp);
			prev = temp;
		}
	}
	//for(int i=0;i<v.size();i++)
	//	cout<<v[i]<<endl;
	int m;
	//cout<<v.size()<<endl;
	reverse(v.begin(),v.end());
	cin>>m;
	for(int i=0;i<m;i++)
	{
		int temp;
		scanf("%d",&temp);
		std::vector<int>::iterator low;
		low  = upper_bound(v.begin(),v.end(),temp);
		int rank;
		rank = (low- v.begin());
		//cout<<rank<<endl;
		cout<<(v.size - rank)+1<<endl;
	}
}