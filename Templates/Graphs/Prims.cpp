// Prims algorithm
// use priority queues - to store the weights in the ascending order
// use greedy approach and connect the vertices with minimum and if they form a cycle dont join the edge






priority_queue<pii,vector<pii>,greater(pii)> q;

int prims(int x)
{
    int minans=0;
    q.push(make_pair(0,x));
    while(q.empty()!=true)
    {
     pair<int,int> p=q.top();
     q.pop();
     int x=p.second;

     if(mark[x]==true)
        continue;
     mark[x]=true;
     minans+=(p.first);
     for(int i=0;i<v[x].size();i++)
     {
         int y=v[x][i].second;
         if(mark[y]==false)
         {
             q.push(v[x][i]);
         }
     }
    }
    return minans;
}
int main()
{
    int nodes,edges;
    cin>>nodes>>edges;
    for(int i=0;i<edges;i++)
    {
        cin>>x>>y>>weight;
        v[x].push_back(make_pair(y,weight));
        v[y].push_back(make_pair(x.weight));
    }
    cout<<prims(1);
}
