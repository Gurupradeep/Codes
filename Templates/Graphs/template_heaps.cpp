void max_heapify(int i,int n)
{
    int left=2*i;
    int right= 2*i+1;
    if(left<=n && arr[left]>arr[i])
        largest=left;
    else largest=i;
    if(right<=n && arr[right]>arr[i])
        largest=right;
    if(largest!=i)
    {
        swap(arr[largest],arr[i]);
        max_heapify(largest);
    }

}

void build_heap(int n)
{
    for(int i=n/2;i>=1;i--)
        max_heapify(i);
}

void min_heapify(int i,int n)
{
    int left=2*i;
    int right=2*i+1;
    if(left<=n && arr[left]>arr[i])
        smallest=i;
    else smallest=left;
    if(right<=n && arr[right]<arr[smallest])
        smallest=right;
    if(smallest!=i)
    {
        swap(arr[i],arr[smallest]);
        min_heapify(smallest);
    }

}

void build_minheap(int n)
{
    for(int i=n/2;i>=1;i--)
    {
        min_heapify(i);
    }
}

void heapsort(int n)
{
    int heaplength=n;
    build_maxheap();
    for(int i=n;i>=2;i--)
    {
        swap(arr[1],arr[i]);
        heaplength=heaplength-1;
        max_heapify(1,heaplength);
    }
}




// priority_queue



int maxi()
{

    return arr[1];
}


int return_max()
{
    if(length==0)
        return -1;
    int max1=arr[1];
    arr[1]=arr[length];
    length--;
    maxheapify(1);
    return max1;
}


void increase_value(i,val)
{
    if(arr[i]<val)
        return;
    arr[i]=val;
    while(i>1 && arr[i/2]<arr[i])
    {
        swap(arr[i/2],arr[i]);
        i=i/2;
    }
}
