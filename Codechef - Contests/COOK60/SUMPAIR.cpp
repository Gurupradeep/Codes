#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	long long t,n,d,sum,num;
	vector<long long>v;
	cin>>t;
	while(t--)
	{
	    sum=0;
	    cin>>n>>d;
	    for(int i=0;i<n;i++)
	    {
	         cin>>num;
	         v.push_back(num);

	    }
	    sort(v.rbegin(),v.rend());
	    int i=0;
	    while(i<n-1)
	    {
	        if(v[i]-v[i+1]<d)
	        {
	            sum=sum+v[i]+v[i+1];
	            i=i+2;
	        }
	        else
	          i=i+1;
	    }
	    cout<<sum<<endl;
	    v.clear();

	}
	return 0;
}
