#Rolling pointer
#http://www.spoj.com/problems/HOTELS/
#https://tp-iiita.quora.com/The-Two-Pointer-Algorithm

#include <bits/stdc++.h>
#define lli long long
#define MAX 1000005
 
using namespace std;
 
lli A[MAX];
 
int main()
{
    int n;
	lli sum = 0;	 
    cin >> n;
   
    for ( int i = 0; i < n; i++ ) 
    	cin >> A[i];
    
    int l = 0, r = 0;
	lli ans = 0;
 
    while ( l < n )
     {
       while ( r < n && sum + A[r] <= M )
        {
           sum += A[r];
           r++;
       }
       ans = max(ans, sum);
       sum -= A[l];
       l++;
    }
 
    cout << ans << endl;
    return 0;
}