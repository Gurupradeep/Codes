#include <iostream>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long t,n1,n2,m;
	scanf("%lld",&t);
	while(t--)
	{
	    scanf("%lld %lld %lld",&n1,&n2,&m);
	    long long temp=min(n1,n2);
	    if(temp<=(m*(m+1))/2)
	    {
	        printf("%lld\n",max(n1,n2)-temp);
	    }
	    else
	    {
	        printf("%lld\n",max(n1,n2)-temp+2*(temp-(m*(m+1))/2));
	    }
	}


	return 0;
}
