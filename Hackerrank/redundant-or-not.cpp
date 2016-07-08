#include <iostream>
#include <iostream>
#include<algorithm>
#include<map>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<vector>
using namespace std;
int main()
{
    long n,a,i;

    vector<long>v;
    vector<long>::iterator it;

    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a);
        it=find(v.begin(),v.end(),a);
        if(it!=v.end())
        {
            printf("REDUNDANT\n");
            v.push_back(a);
        }
        else
        {
            printf("ADDED\n");
            v.push_back(a);

        }
    }
    v.clear();
    return 0;
}

