#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long n,k;
    cin>>n>>k;
    char a[100006];
    scanf("%s",a);
    int miss = 0;
    for(int i=0;i<n/2;i++)
    {
        if(a[i]!=a[n-i-1])
            miss++;
    }
    int flag = 0;
    int temp = k;
    if(k<miss)
        flag = 1;
    else
    {
        for(int i=0;i<n/2;i++)
        {
            if(temp>miss)
            {
                if((a[i]==a[n-i-1])&&a[i]!='9')
                {
                    if(temp-2>=miss)
                    {
                        a[i] = '9';
                        a[n-i-1] = '9';
                        temp = temp-2;
                    }
                }
                if(a[i]!=a[n-i-1])
                {
                    if(a[i]=='9'||a[n-i-1]=='9')
                    {
                        if(a[i]!='9')
                        {
                          a[i]='9';
                          temp--;
                          miss--;
                        }
                        else
                        {
                            a[n-i-1] = '9';
                            miss--;
                            temp--;
                        }
                    }
                    else
                    {
                        if(temp-1>=miss)
                        {
                            a[i] = '9';
                            a[n-i-1] = '9';
                            temp = temp -2;
                            miss--;

                        }
                    }
                }
            }
            else
            {
                if(a[i]<a[n-i-1])
                {
                    a[i] = a[n-i-1];
                    temp--;
                    miss--;
                }
                if(a[i]>a[n-i-1])
                {
                    a[n-i-1] = a[i];
                    temp--;
                    miss--;
                }
            }
        }
        if(temp>=1)
        {
            if(n%2!=0)
                a[n/2]='9';
        }
    }
    if(flag==1)
        printf("-1\n");
    else
    {
        for(int i=0;i<n;i++)
            printf("%c",a[i]);
    }


}
