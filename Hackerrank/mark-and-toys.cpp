#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main()
{
    long long n, k; cin >> n >> k;
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        int p; cin >> p;
        v.push_back(p);
    }

    int j = 0;
    int ans=0;

    // Write the code for computing the final answer using n,k,prices
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
        {
            ans=ans+v[i];
             if(ans<=k)
                 j++;
              else
                  break;
    }


    cout << j << endl;

    return 0;
}

