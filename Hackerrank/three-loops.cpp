#include<iostream>

using namespace std;

int main()
{
   int n,sum;
   cin>>n>>sum;
   int ans=0;
   for(int a=1;a<=n;a++)
   {
      for(int b=1;b<=n;b++)
      {
         for(int c=1;c<=n;c++)
         {
            if(a+b+c==sum){
               ans++;
            }
         }

      }

   }
   cout<<ans<<endl;
   return 0;
}
