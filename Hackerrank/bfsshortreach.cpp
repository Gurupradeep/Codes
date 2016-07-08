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


void bfs(int i)

{

	queue <int> q;

	q.push(i);

	visited[i]=1;

	while(!q.empty())

	{

		int k=q.front();

		q.pop();

		for(int j=0;j<adjlist[k].size();j++)

		{

			if(level[adjlist[k][j]]==-1)

			{

				q.push(adjlist[k][j]);
                visited[adjlist[k][j]]=1;
                level[adjlist[k][j]]=level[k]+1;

			}

		}

	}

}



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,ve,st,u,v;
    long long ed;
        scanf("%d",&t);
      while(t--)
          {
              scanf("%d %lld",&ve,&ed);
             for(int i=0;i<=ve;i++)
             {
                 visited[i]=0;
                 level[i]=-1;
                 adjlist[i].clear();
             }
        for(long long i=0;i<ed;i++)
        {
            scanf("%d %d",&u,&v);
            adjlist[u].push_back(v);
            adjlist[v].push_back(u);
        }
          scanf("%d",&st);
          level[st]=0;
          bfs(st);
          for(int i=1;i<=ve;i++)
              {
                 if(visited[i]==0)
                     printf("-1 ");
                  else
                      {
                         if(level[i]!=0)
                             printf("%d ",level[i]*6);
                  }
             }
          printf("\n");

}
    return 0;
}
