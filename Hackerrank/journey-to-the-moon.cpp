#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>
#include <numeric>
#include <cstdlib>
#include <cmath>
#include <cstdio>
#include <fstream>
#include <ctime>
#include <cassert>

using namespace std;
int visited[1000002];
vector<int>adjlist[1000002];
int comp[1000002];
int ans;
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

			if(visited[adjlist[k][j]]!=1)

			{

				q.push(adjlist[k][j]);
                visited[adjlist[k][j]]=1;
                comp[ans-1]++;

			}

		}

	}

}


int main()
{
    int ve,ed,u,v;
    long long result;
        ans=0;
       scanf("%d %d",&ve,&ed);
     for(int i=0;i<ve;i++)
             {
                 visited[i]=0;
                 comp[i]=1;
             }
     for(long long i=0;i<ed;i++)
        {
            scanf("%d %d",&u,&v);
            adjlist[u].push_back(v);
            adjlist[v].push_back(u);
        }
    for(int i=0;i<ve;i++)
        {
            if(visited[i]!=1)
                {
                   ans++;
                   bfs(i);

            }
    }

    for(int i=0;i<ans;i++)
        {
          for(int j=i+1;j<ans;j++)
              {
                 result=result+comp[i]*comp[j];
          }
    }
    printf("%lld\n",result);

}
