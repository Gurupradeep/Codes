#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,n,k,p,i,count;
    vector<int>v;
    scanf("%d",&t);
    while(t--)
        {
           count=0;
        scanf("%d %d",&n,&k);
        for(i=0;i<n;i++)
            {
             scanf("%d",&p);
            v.push_back(p);
            if(v[i]<=0)
                count++;

        }
        if(count<k)
            printf("YES\n");
        else
            printf("NO\n");
           v.clear();
    }
    return 0;
}
