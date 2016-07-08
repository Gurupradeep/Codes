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
    long long t;
    cin >> t;
    // your code goes here
    long long sum=1;
    for(int i=2;i<=t;i++)
        {
            sum=sum+(i/2)+1;
    }
    cout<<sum<<endl;
}
