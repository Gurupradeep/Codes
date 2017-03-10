

// Naive O(n^2) solution !! Just For Basics

void initialise()
{
    for(int i=0;i<n;i++)
    {
        a[i]=i;
    }

}

bool find(int i,int j) // find whether i and j are connected
{
    if(a[i]==a[j])
        return true;
    else
        return false;
}

void union(int i,int j) // changing the parent of i to j
{
    int temp=a[i];
    for(int k=0;k<n;k++)
    {
        if(a[k]==temp)
            a[k]=a[j];
    }
}



//improvement : we keep arr[i] as the parent of i
// for find operation , we will just check if root of A is equal to root of B
// we know that a[i] is the parent of i : then the root would be a[a[a[....]]] until i=a[i]

// worst case O(n)
void initialise()
{
    for(int i=0;i<n;i++)
    {
        a[i]=i;
    }
}

int root(int i)
{
    while(i!=a[i])
        i=a[i];
    return i;
}

void union(int A,int B)
{
    int root_a=root(A);
    int root_b=root(B);
    a[root_a]=root_b;
}

bool find(int A,int B)
{
    if(root(A)==root(B))
        return true;
    else
        return false;
}




//  we keep track of the size of the connected components and combine the smaller to the larger one
// O(logn)
void initialise()
{
    for(int i=0;i<n;i++)
    {
        a[i]=i;
        size[i]=1;
    }
}

int root(int A)
{
    while(a[A]!=A)
    {
        A=a[A];
    }
    return A;
}

bool find(int A,int B)
{
    int root_a=root(A);
    int root_b=root(B);
    if(root_a==root_b)
        return true;
    else
        return false;
}

void weighted_union(int A,int B)
{
    int root_a=root(A);
    int root_b=root(B);
    if(size[root_a]<size[root_b])
    {
        size[root_b]+=size[root_a];
        a[root_a]=a[root_b];
    }
    else
        {
            size[root_a]+=size[root_b];
            a[root_b]=a[root_a];
        }

}



// Path compression : instead of the parent we choose the Grandparent's value is considered.
// We reduce the path length to half

// reduces the complexity to log*n = recursive log(n) till it becomes 1
int root(int A)
{
    while(a[A]!=A)
    {
        a[A]=a[a[A]];
        A=a[A];
    }
    return A;
}

