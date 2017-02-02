//Question :
/*Given an array containing NN integers, you need to find the length of the smallest contiguous subarray that contains atleast KK distinct elements in it. Output "−1−1" if no such subarray exists.
*/

#include <bits/stdc++.h>
using namespace std;


int main()
{
	int l = 0, r = 0, ans = INF;
	map <int , int >  cnt;
 
	while ( l < n ) {	
    	while ( r < n && s.size() < K ) {
       s.insert(A[r]);
       cnt[A[r]]++;
       r++;
    }
    if (s.size() >=K) {
		ans = min(ans, r-l);
	}
    if ( cnt[A[l]] == 1 ) s.erase(A[l]); 
    cnt[A[l]]--; 
    l++;
}
if ( ans == INF ) ans = -1;
 
cout << ans << endl;
}