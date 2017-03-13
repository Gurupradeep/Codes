#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int t;
    cin >> n >> t;
    vector<int> c(t);
    for(int c_i = 0; c_i < t; c_i++){
       cin >> c[c_i];
    }
    // your code goes here
    int ans = 0;
    int candies = n;
    for(int i=0;i<t;i++)
    {
            candies = candies - c[i];
            if(candies < 5 && i != t-1)
            {
                int temp = candies;
                candies = n;
                ans = ans + n - temp;
            }
    }
    cout<<ans<<endl;
    
    return 0;
}
