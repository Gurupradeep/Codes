// link : https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/gotta-beat-em-all/

// To find the factors of numbers in range 1 to n in nlogn 
// Then sort that array and Number of numbers having factors less than that



#include <bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	scanf("%d",&t);
	int n;
	scanf("%d",&n);
	int min_prime[n+1];
	memset(min_prime,0,sizeof(min_prime));
	for(int i=2;i*i<=n;i++)
	{
		if(min_prime[i] == 0)
		{
			for(int j=i*i;j<=n;j = j+i)
			{
				if(min_prime[j] == 0)
				{
					min_prime[j] = i;
				}
			}
		}
	}
	for(int i = 2;i<=n;i++)
	{
		if(min_prime[i] == 0)
			min_prime[i] = i;
	}
	int factor[1002];
	for(int i=1;i<=1002;i++)
		factor[i] = 1;


	int no_of_factors[100006];
	no_of_factors[1] = 1;

	for(int i=2;i<=n;i++)
		no_of_factors[i] = 1;

	for(int i=2;i<=n;i++)
	{
		int temp = i;
		set<int >s;
		while(temp!=1)
		{
			factor[min_prime[temp]]++;
			s.insert(min_prime[temp]);
			temp = temp/min_prime[temp];
		}
		std::set<int>::iterator it;
		for(it = s.begin();it!= s.end();++it)
		{
			no_of_factors[i] = no_of_factors[i] * (factor[*it]);
			factor[*it] = 1; 
		}	

	}
	no_of_factors[0] = 0;
	int dummy[1000006];
	for(int i=0;i<=n;i++)
		dummy[i] = no_of_factors[i];
	cout<<"Dummy"<<endl;
	for(int i=0;i<=n;i++)
		cout<<dummy[i]<<endl;
	sort(no_of_factors,no_of_factors+n+1);
	cout<<"Lower bound"<<endl;
	cout<<lower_bound(no_of_factors,no_of_factors+n+1,0) - no_of_factors<<endl;
	while(t--)
	{
		int k;
		scanf("%d",&k);
		int ans = lower_bound(no_of_factors,no_of_factors+n+1,dummy[k]) - no_of_factors;
		printf("%d\n",ans-1	);
	}

}


