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
                int n;
                scanf("%d",&n);
                int a[50004];
                 for(int i=0;i<n;i++)
                     scanf("%d",&a[i]);
                    long long ac=0,r=0,o=0;
                 sort(a,a+n);
                 for(int i=n-1;i>=2;i--)
                     {
                        for(int j=i-1;j>=1;j--)
                            {
                                   if(a[j]+a[j-1]<=a[i])
                                       break;
                                    else
                                        {
                                            for(int k=j-1;k>=0;k--)
                                                {
                                                    if(a[k]+a[j]<=a[i])
                                                        break;
                                                    else
                                                        {
                                                            if((a[i]*a[i])==(a[j]*a[j]+a[k]*a[k]))
                                                            {
                                                                r++;
                                                               // cout<<i<<" "<<j<<" "<<k<<endl;
                                                            }
                                                             else if((a[i]*a[i])<(a[j]*a[j]+a[k]*a[k]))
                                                                 {
                                                                    ac++;
                                                                     //cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
                                                             }
                                                              else
                                                                 o++;


                                                    }
                                            }
                                    }
                        }
                 }
            printf("%lld %lld %lld",ac,r,o);
}


