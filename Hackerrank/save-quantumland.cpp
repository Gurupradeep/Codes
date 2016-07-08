#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--)
        {
            int a[103];
            int n;
            cin>>n;
            for(int i=1;i<=n;i++)
                cin>>a[i];
           // for(int i=1;i<=n;i++)
              //  cout<<a[i]<<endl;

            long long ans=0;
            for(int i=2;i<=n;i++)
                {
                    if(a[i]==0)
                        {
                            if(a[i-1]==0)
                                {
                                    ans++;
                                    a[i]=1;
                            }

                    }
                else
                    continue;
            }


        cout<<ans<<endl;
    }
    return 0;
}
