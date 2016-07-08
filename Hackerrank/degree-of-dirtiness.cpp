#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
      int t;
      cin>>t;
      while(t--)
          {
             int a[50002];
             int n,m,ans,dirt;
             cin>>n>>m;
             for(int i=0;i<=n;i++)
                 a[i]=0;
             for(int i=1;i<=m/n;i++)
                 {
                      for(int j=0;j<=n;j++)
                           a[j]++;
             }
             if(m%n==0)
                 {
                     printf("%d %d\n",n/2+1,m/n-1);
                    continue;
             }
              if(n%2==0||(n%2==1&&(m/n)%2==0))
                  {
              int c=m%n;
              int count=0;
              int p=1;
              int q=n;
              while(count<=c)
                  {
                      a[p]++;
                      p++;
                      count++;
                      if(count==c)
                          {
                               ans=p-1;
                              dirt=a[p-1]-1;
                      }
                      if(count<=c)
                          {
                            a[q]++;
                             q--;
                             count++;
                      }
                     if(count==c)
                          {
                               ans=q+1;
                               dirt=a[q+1]-1;
                      }

              }
             printf("%d %d\n",ans,dirt);

              }
            else
                {
                    int c=m%n;
              int count=0;
              int p=1;
              int q=n;
              while(count<=c)
                  {


                  a[q]++;
                      q--;
                     count++;
                  if(count==c)
                          {
                               ans=q+1;
                               dirt=a[q+1]-1;
                      }


                  if(count<=c)
                          {
                            a[p]++;
                      p++;
                      count++;
                      }
                     if(count==c)
                          {
                               ans=p-1;
                              dirt=a[p-1]-1;
                      }
              }
             printf("%d %d\n",ans,dirt);
            }
      }
    return 0;
}
