#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,k;
    cin>>n>>k;
    vector<int > v;
    int l,imp;
    int sum = 0;
    int p=0;
    for(int i=0;i<n;i++)
        {
            cin>>l>>imp;
            if(imp==0)
                sum = sum + l;
            else
            {
                v.push_back(l);
                p++;
            }
    }
    sort(v.begin(),v.end());
    for(int i=p-1;i>p-1-k;i--)
        sum = sum + v[i];
    for(int i=0;i<=p-1-k;i++)
        sum = sum - v[i];
    printf("%d\n",sum);
    return 0;
}
