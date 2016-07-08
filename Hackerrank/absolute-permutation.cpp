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
        int n,k;
        cin>>n>>k;
        int b[100006];
        if(n%2==1)
        {
            if(k!=0)
            {
                printf("-1\n");
                continue;
            }
            else
            {
                for(int i=1;i<=n;i++)
                    printf("%d ",i);
                printf("\n");
            }
        }
        else
        {
            if(k==0)
            {
                for(int i=1;i<=n;i++)
                    printf("%d ",i);
                printf("\n");
            }
            else if(n%(2*k)!=0)
            {
                printf("-1\n");
                continue;
            }
            else
            {
               int flag=1;
                for(int i=1;i<=n;i++)
                {
                    if(flag==1)
                    {
                        b[i] = i+k;
                      //  flag++;
                        if((i)%k==0)
                           flag=0;
                    }
                    else
                    {
                        b[i] = i-k;
                        if((i)%k==0)
                            flag=1;
                    }

                }
                for(int i=1;i<=n;i++)
                    printf("%d ",b[i]);
                printf("\n");
            }
        }
    }









    }
