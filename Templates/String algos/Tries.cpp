#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;

long long int a[400004];
long long int frt[400004];
long long int bck[400004];

class trie
{
    struct node
    {
        node *child[2];
        node()
        {
            child[0]=child[1]=NULL;
        }
    };

public:
    node *top;
    trie()
    {
        top=new node();
    }
    // to store the number.
    void add(int k)
    {
        node *curr=top;
        for(int i=29;i>=0;i--) // max of 32 bits.
        {
            int bit=(k&(1<<i)?0:1); // from MSB to LSB.
            if(curr->child[bit]==NULL)
            {
                curr->child[bit]=new node(); // create a new node of the node type if it doesn't exist.
            }
            curr=curr->child[bit]; // add the data to the node created.
        }

    }

    int getmax(int k)
    {
        node *curr=top;
        long long int ans=0;
        for(int i=29;i>=0;i--)
        {
            int bit=k&(1<<i)?0:1;
            if(curr->child[1-bit]==NULL) // 0^1=1. if the opposite bit doesnt exist , move along the way.
            {
                curr=curr->child[bit];
            }
            else
            {
                curr=curr->child[1-bit]; // if the way exists , follow that way
                ans+=(1<<i); // and add the value to the ans. == 2 pow i.
            }
        }
        return ans;
    }


};

trie *frtpntr = new trie();
trie *bckpntr = new trie();

int main()
{
    /*
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    frtpntr->add(0);
    long long int aa=0;
    for(int i=0;i<n;i++)
    {
        aa=aa^a[i];
        frt[i]=frtpntr->getmax(aa);
        frtpntr->add(aa);

    }

    Change depending on what is asked in the question.

    */

    return 0;
}
