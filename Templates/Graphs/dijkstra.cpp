#include <queue>
#define pair<int,int> pii
#define inf 1e9
struct comp
{
    bool operator() (pair<int,int> const &a,pair<int,int> const &b )
    {
        return a.second>b.second;
    }
};

vector<pii> v[n+1];
int x,y;
for(int i=0;i< ;i++)
{

    scanf("%d %d",&x,&y);
    v[x].push_back(y);
    v[y].push_back(x);
}



priority_queue<pii,vector<pii>,comp) q;
int distance[n+1],visited[n+1];
for(int i=0;i<=n;i++)
{
    distance[i]=inf;
    visited[i]=0;
}

distance[s]=0;
q.push(pii(s,distance[s]));
while(q.empty()==false)
{
    pii k=q.front();
    q.pop();
    if(visited[k.first]==1)
        continue;
    visited[k.first]=1;
    for(int i=0;i<v[k.first].size();i++)
    {
        if(visited[v[k.first][i]]==0)
        {
            if(distance[v[k.first][i] > distance[k.first]+ cost)
                distance[v[k.first][i]]=distance[k.first]+cost;
            v.push_back(pii(v[k.first][i],distance[v[k.first][i]]));
        }
    }
}
