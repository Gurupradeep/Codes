#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
//int A[202][202];
int A[1002][1002];
//int M[1002][1002][12][12];
vector<vector<int > >M[10][10];
int sum[1002][1002];
int result;
int p[12];
int lll[1002];
void logarithm()
{
    for(int i=0;i<=1000;i++)
        lll[i] = (int)log2(i);
}
void power()
{
    p[0] = 1;
    for(int i=1;i<=11;i++)
        p[i] = 2*(p[i-1]);
}
void pre_sum(int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
            sum[i][j] = A[i][j];
            if(j-1>=0)
                sum[i][j] = sum[i][j] + sum[i][j-1];
            if(i-1>=0)
                sum[i][j] = sum[i][j] + sum[i-1][j];
            if(i-1>= 0 && j-1>=0)
                sum[i][j] = sum[i][j] - sum[i-1][j-1];
        }
}
int rect_sum(int p,int q, int r, int s)
{
    result = sum[r][s];
    if(p-1>=0)
        result = result - sum[p-1][s];
    if(q-1>=0)
        result = result - sum[r][q-1];
    if(p-1>=0 && q-1>=0)
        result = result + sum[p-1][q-1];
    return result;
}
int GetMaximum1(int a, int b)
{
    return max(a,b);
}
int GetMaximum2(int a, int b, int c, int d)
{
        return max(max(a,b),max(c,d));
}
void sparse_matrix(int n, int m)
{
    vector<int >temp;
    int i,j,x,y;
    for(i=0;p[i]<=n;i++)
        for(j=0;p[j]<=m;j++)
            for(x=0;(x+p[i]-1)<n ;x++)
            {
                for(y=0;(y+p[j]-1)<m;y++)
                {
                    if(i==0 && j==0)
                        temp.push_back(A[x][y]);
                    else if(i==0)
                        temp.push_back(GetMaximum1(M[i][j-1][x][y], M[i][j-1][x][y+p[j-1]]));
                    else if(j==0)
                        temp.push_back(GetMaximum1(M[i-1][j][x][y], M[i-1][j][x+ p[i-1]][y]));
                    else
                        temp.push_back(GetMaximum2(M[i-1][j-1][x][y], M[i-1][j-1][x + p[i-1]][y],
                            M[i-1][j-1][x][y+ p[j-1]], M[i-1][j-1][x + p[i-1]][y+ p[j-1]]));

                }
                M[i][j].push_back(temp);
                temp.clear();
            }
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int i,j;
   // int temp4;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        {
          //  scanf("%d",&temp4);
            scanf("%d",&A[i][j]);
          //  A[i].push_back(temp4);
        }
        power();
        logarithm();
    sparse_matrix(n,m);
    pre_sum(n,m);
    int q;
    scanf("%d",&q);
     int x,y,x1,y1;
      long final_ans= 1000000000;
        int n_r, n_c;
        int order;
        int k,l;
        int ans;
        int maximum;
        int total_sum;
    while(q--)
    {
       final_ans= 1000000000;
        scanf("%d %d",&n_r,&n_c);
        if(n_r ==1 && n_c==1)
            printf("0\n");
        else
        {
            order = n_c * n_r;
        for(i=0;i<=(n-n_r);i++)
            for(j=0;j<=(m-n_c);j++)
            {

                 x = i;
                 y = j;
                 x1 = i+n_r -1;
                 y1 = j + n_c - 1;
                 k = lll[x1-x+1];
                 l = lll[y1-y+1];

              //   k = (int)log2(x1-x+1);
               //  l =(int)log2(y1-y+1);
                 //pair<int, int>ans;
                 ans = GetMaximum2(M[k][l][x][y], M[k][l][x1 - p[k] + 1][y], M[k][l][x][y1 - p[l] + 1], M[k][l][x1 - p[k] + 1][y1 - p[l]+ 1]);
                  maximum = ans;
            //     cout<<maximum<<endl;
                  total_sum = rect_sum(x,y,x1,y1);
             //    cout<<total_sum<<endl;
                 if(maximum*order - (total_sum)<= final_ans)
                    final_ans = maximum * order -(total_sum);

            }
            printf("%ld\n",final_ans);
        }
    }
}
