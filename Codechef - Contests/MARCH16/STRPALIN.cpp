#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	        int t;
	        scanf("%d",&t);
	        while(t--)
	        {
	            char a[100006],b[100006];
                scanf("%s",a);
                scanf("%s",b);
                int p[50],q[51];
               // cout<<strlen(a)<<endl;
                int c=strlen(a);
                int d=strlen(b);
                for(int i=0;i<=30;i++)
                {
                    p[i]=0;
                    q[i]=0;
                }
             //   cout<<a<<endl;
                for(int i=0;i<c;i++)
                   {
                     //  cout<<"dadda"<<endl;
                      // cout<<a[i]<<endl;
                      // printf("%d\n",a[i]-97);
                     //  cout<<a[i]-97<<endl;
                       p[a[i]-97]++;
                   }
                for(int i=0;i<d;i++)
                {
                    q[b[i]-97]++;
                   //  cout<<b[i]-97<<endl;
                }
                int flag=0;
                for(int i=0;i<=30;i++)
                {
                    if(p[i]>0&&q[i]>0)
                    {
                        flag=1;
                     //   cout<<p[i]<<" "<<q[i]<<endl;
                        break;
                    }
                }
                if(flag==1)
                    printf("Yes\n");
                else
                    printf("No\n");
                }

}
