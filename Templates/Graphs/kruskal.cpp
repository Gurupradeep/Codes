// Kruskal's algorithm
#define pair<int,int> pii

pair<int,int> p[10000];

void initialise()
{
    for(int i=1;i<=n;i++)
        node[i]=i;
}

int root(int x)
{
    while(x!=node[x])
    {
        node[x]=node[node[x]];
        x=node[x];

    }
    return x;
}

void union_(int x,int y)
{
    x=root(x);
    y=root(y);
    root[x]=root[y];
}
int kruskal()
{
    int minans=0;
    for(int i=0;i<edges;i++)
    {

        int x=p[i].second.first;
        int y=p[i].second.second;
        int weight=p[i].first;
        if(root(x)!=root(y))
            {
                union_(x,y);
                minans+=weight;

            }
    }
    return minans;
}

int main()
{

    int n,edges;
    cin>>edges;
    for(int i=0;i<edges;i++)
    {
        int x,y,weight;
        cin>>x>>y>>weight;
        p[i]=make_pair(weight,make_pair(x,y));
    }
    sort(p,p+edges);
    int ans=kruskal();
}
