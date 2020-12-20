#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

struct minHeap
{
    lli arr[1000];
    lli size = 0;
};

minHeap mh;

void bubbleUp(lli pos)
{
    if(pos == 0)
    {
        return ;
    }
    if(mh.arr[pos]<mh.arr[(pos-1)/2])
    {
        swap(mh.arr[pos],mh.arr[(pos-1)/2]);
        bubbleUp((pos-1)/2);
    }
}

bool isValid(lli pos)
{
    if(pos>=0 && pos<mh.size)
    {
        return true;
    }
    return false;
}

void dispMinHeap()
{
    lli i;
    for(i=0;i<mh.size;i++)
    {
        cout<<mh.arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleDown(lli pos)
{
    lli l = (pos*2) + 1;
    lli r = (pos*2) + 2;

    if(!isValid(pos))
    {
        return ;
    }

    if(mh.arr[l] <= mh.arr[r])
    {
        if(mh.arr[pos]>mh.arr[l])
        {
            swap(mh.arr[l],mh.arr[pos]);
            bubbleDown(l);
        }
        else
        {
            return ;
        }
    }
    else
    {
        if(mh.arr[pos]>mh.arr[r])
        {
            swap(mh.arr[r],mh.arr[pos]);
            bubbleDown(r);
        }
        else
        {
            return ;
        }
    }
}

void insert(lli x)
{
    mh.arr[mh.size] = x;
    bubbleUp(mh.size);
    mh.size += 1;
}

lli extractMin()
{
    lli mini = mh.arr[0];
    mh.arr[0] = mh.arr[mh.size - 1];
    mh.arr[mh.size - 1] = INT_MAX;
    mh.size -= 1;
    bubbleDown(0);
    return mini;
}

main()
{
    for(lli i = 0;i<1000;i++)
    {
        mh.arr[i] = INT_MAX;
    }

    insert(20);
    insert(23);
    insert(90);
    insert(32);
    insert(50);
    insert(74);
    insert(88);
    insert(80);

    dispMinHeap();

    cout<<extractMin()<<" extracted from heap\n";

    dispMinHeap();
}
