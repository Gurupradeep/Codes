/* Question : https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/the-normal-type/
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	map<long long, int >count;
	set<int >s;
	int l = 0;
	int r = 0;
	long long ans = 0;
	int n;
	scanf("%d ",&n);
	//cout<<n<<endl;
	long long a[100006];
	set<long long > distinct;
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
		//cout<<a[i]<<" "<<i<<endl;
		distinct.insert(a[i]);
	}
//	cout<<"Done"<<endl;
	int d = distinct.size();
//	cout<<d<<endl;
	while(l<n)
	{
		while(r<n && s.size()<d)
		{
			s.insert(a[r]);
			count[a[r]]++;
			r++;
		}
		if(s.size() == d)
		{
			//cout<<l<<endl;
			if(count[a[l]] == 1)
				s.erase(a[l]);
			count[a[l]]--;
			ans = ans + 1 + (n-r);
		}
		l++;
	}
	cout<<ans<<endl;

}