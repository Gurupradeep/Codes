#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    long long sum=0;
    for(int i=1;i<=floor(sqrt(n));i++)
        {

          sum+=floor(n/i)-(i-1);
    }
    cout<<sum<<endl;
    return 0;
}
