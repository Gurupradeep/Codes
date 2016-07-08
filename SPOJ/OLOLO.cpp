#include <iostream>
using namespace std;

int main() {

	   long long n;
	   long long p;
	   long long ans=0;
	   scanf("%lld",&n);
	   while(n--)
	   {
	   	  scanf("%lld",&p);
	   	  ans=ans^p;

	   }
	   printf("%lld\n",ans);

	return 0;
}
