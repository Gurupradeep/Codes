#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<queue>
using namespace std;
int level[1002];
vector<int>adjlist[3000];
int visited[1002];

int ans;
int  dfs(int i)

{



	visited[i]=1;
    int num=0;
	for(int j=0;j<adjlist[i].size();j++)
		{
			if(visited[adjlist[i][j]]==-1)
			{
                    int num2=dfs(adjlist[i][j]);
                    if(num2%2==0)
                        ans++;
                    else
                        num+=num2;
			}


		}
     return num+1;
}



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
              long long m,n;
                int u,v;
            cin>>n>>m;
        for(long long i=0;i<m;i++)
        {
            scanf("%d %d",&u,&v);
            adjlist[u].push_back(v);
            adjlist[v].push_back(u);
        }
        for(int i=1;i<=n;i++)
            visited[i]=-1;

          dfs(1);
          cout<<ans<<endl;
    return 0;
}
