#include <iostream>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long t,n,a,b,c;
	scanf("%lld",&t);
	vector<pair<pair<long long, long long>, double> >v;
	while(t--)
	{
	    scanf("%lld",&n);
	    long long temp2=n;
	    while(n--)
	    {
	        scanf("%lld %lld %lld",&a,&b,&c);
	        long long s=__gcd(a,b);
	        a=a/s;
	        b=b/s;
	        double c1;
	        c1=(c*1.0/s);
	        //cout<<c1<<endl;

	       // cout<<a<<" "<<b<<" "<<c<<endl;
	        v.push_back(make_pair(make_pair(a,b),c1));

	    }
	    sort(v.begin(),v.end());
	    long long max=0;
	   long long ma=1;
	   long long t1,t2;
	   double t3;
	   t1=v[0].first.first;
	   t2=v[0].first.second;
	   t3=v[0].second;
	    long long i=1;
	    //for(int i=0;i<temp2;i++)
	    //cout<<v[i].first.first<<" "<<v[i].first.second<<" "<<v[i].second<<endl;
	    //i=1;
	    while(i<temp2)
	    {
	        if(v[i].first.first==t1&&v[i].first.second==t2)
	        {
	            if(v[i].second!=t3)
	            {
	                ma++;
	                t3=v[i].second;
	              //  cout<<
	            }
	           if(ma>max)
	            max=ma;
	        }
	        else
	        {
	            t1=v[i].first.first;
	            t2=v[i].first.second;
	            t3=v[i].second;
	            ma=1;
	        }
	        i++;
	    }
	    if(ma>max)
	    max=ma;

	   printf("%lld\n",max);
	    v.clear();
	}


	return 0;
}
