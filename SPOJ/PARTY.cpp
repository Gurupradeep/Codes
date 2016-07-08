#include<bits/stdc++.h>
using namespace std;

int knapSack(int W, int wt[], int val[], int n)
{
   int i, w;
   int K[n+1][W+1];
   for (i = 0; i <= n; i++)
   {
       for (w = 0; w <= W; w++)
       {
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (wt[i-1] <= w)
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
           else
                 K[i][w] = K[i-1][w];
       }
   }
   int temp=W;
   long long sum=0;
	while(temp)
	{
		if(K[n][temp]<K[n][W])
			break;
		temp--;
	}
	cout<<temp+1<<" ";
    /*for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=W;j++)
        {
            cout<<K[i][j]<<" ";
        }
        cout<<endl;
    }*/

   return K[n][W];
}
int main()
{
    int w,n;
    cin>>w>>n;
    while(!(w==0&&n==0))
    {
            int wt[110];
            int val[110];
            for(int i=0;i<n;i++)
                cin>>wt[i]>>val[i];
            int fun=knapSack(w,wt,val,n);
            cout<<fun<<endl;
            cin>>w>>n;


    }
}
