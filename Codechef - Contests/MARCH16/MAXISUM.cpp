#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	        int t;
	        cin>>t;
	        while(t--)
            {
	             long long n,k;
	             scanf("%lld %lld",&n,&k);
	             long long a[100006],b[100006];
	             for(int i=1;i<=n;i++)
	                scanf("%lld",&a[i]);
	             long long min = 100006;
	             long long max = -100006;
	             long long p=0,q=0;
	             for(int i=1;i<=n;i++)
	             {
	                 long long temp;
	                 scanf("%lld",&temp);
	                 b[i]=temp;
	                 if(temp>max)
	                 {
	                     p=i;
	                     max=temp;
	                 }
	                 if(temp<min)
	                 {
	                     q=i;
	                     min=temp;
	                 }
	             }
	             if(abs(min)>max)
                        a[q]-=k;
                 else
                        a[p]+=k;
                long long ans=0;
                for(int i=1;i<=n;i++)
	                ans+=a[i]*b[i];
	            printf("%lld\n",ans);
            }
	return 0;
}
