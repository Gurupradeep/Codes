#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
void print(int a[],int n);
int main()
    {

       int a[1003];
       int n,i,k;
      scanf("%d",&n);
      for(i=0;i<n;i++)
          {
             scanf("%d",&a[i]);

      }
        k=a[n-1];
       for(i=n-2;i>=0;i--)
           {
             if(a[i]>k)
                 {
                    if(i==0)
                        {
                          a[i+1]=a[i];
                          print(a,n);
                           a[i]=k;
                          print(a,n);

                    }
                 else
                     {
                 a[i+1]=a[i];
                  print(a,n);
                 }
       }
           else
               {
               a[i+1]=k;
               print(a,n);
               break;
           }


}
}
void print(int a[],int n)
    {
      int l;
       for(l=0;l<n;l++)
           printf("%d\t",a[l]);
        printf("\n");

}
