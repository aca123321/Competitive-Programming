#include<bits/stdc++.h>
using namespace std;

#define lli long long int

lli a[6] = {1, 5, 10, 20, 40, 80};
lli b[5] = {6, 7, 20, 80, 100};
lli c[8] = {3, 4, 15, 20, 30, 70, 80, 120};

lli cur;

//largest number lesser than arr2[i]
lli greater_bin(lli start, lli end)
{
    if(start == end)
    {
        if(a[start] >= b[cur])
        {
            return -1;
        }
        else
        {
            return start;
        }
    }
    else if(start == end-1)
    {
        if(a[end] < b[cur])
        {
            return end;
        }
        else if(a[start] < b[cur])
        {
            return start;
        }
        else
        {
            return -1;
        }
    }

    lli mid = (start+end)/2;

    if(a[mid] < b[cur])
    {
        return greater_bin(mid, end);
    }
    else
    {
        return greater_bin(start, mid-1);
    }
}

// smallest number greater than arr2[i]
lli lesser_bin(lli start, lli end)
{
    if(start == end)
    {
        if(c[start] <= b[cur])
        {
            return -1;
        }
        else
        {
            return start;
        }
    }
    else if(start == end-1)
    {
        if(c[start] <= b[cur])
        {
            if(c[end] <= b[cur])
            {
                return -1;
            }
            else
            {
                return end;
            }
        }
        else
        {
            return start;
        }
    }

    lli mid = (start+end)/2;

    if(c[mid] > b[cur])
    {
        return lesser_bin(start, mid);
    }
    else
    {
        return lesser_bin(mid+1, end);
    }
}

main()
{
    lli na=6,nb=5,nc=8,i,ai,ci,count=0;

    for(i=0;i<nb;i++)
    {
        cur = i;
        ai = greater_bin(0,na-1);
        ci = lesser_bin(0,nc-1);

        if(ai != -1 && ci != -1)
        {
            count += ((ai + 1)*(nc - ci));
        }
    }

    cout<<count<<endl;
}
