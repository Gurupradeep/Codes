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
#include <unordered_map>

using namespace std;


int main(){
    int n;
    int temp;
    cin >> n;
    vector<int> t(n);
    for(int i = 0;i < n;i++){
       cin >> t[i];
    }
    temp=0;
    for(int i=0;i<n;i++)
        {
           if(temp<t[i])
               temp=t[i];
           else
               temp=temp+1;
    }
    cout<<temp<<endl;
    return 0;
}
