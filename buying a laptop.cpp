#include<bits/stdc++.h>
using namespace std;

int getMid(int s, int e)
{
    return (s + (e - s) / 2);
}

int MaxUtil(int* st, int ss, int se, int l, int r, int node)
{
    if (l <= ss && r >= se)
        return st[node];

    if (se < l || ss > r)
        return -1;

    int mid = getMid(ss, se);

    return max(MaxUtil(st, ss, mid, l, r,
                       2 * node + 1),
               MaxUtil(st, mid + 1, se, l,
                       r, 2 * node + 2));
}

int getMax(int* st, int n, int l, int r)
{
    if (l < 0 || r > n - 1 || l > r)
    {
        return -1;
    }

    return MaxUtil(st, 0, n - 1, l, r, 0);
}

int constructSTUtil(int arr[], int ss, int se,
                    int* st, int si)
{
    if (ss == se)
    {
        st[si] = arr[ss];
        return arr[ss];
    }

    int mid = getMid(ss, se);

    st[si] = max(constructSTUtil(arr, ss, mid, st,
                                 si * 2 + 1),
                 constructSTUtil(arr, mid + 1, se,
                                 st, si * 2 + 2));

    return st[si];
}

int* constructST(int arr[], int n)
{
    int x = (int)(ceil(log2(n)));

    int max_size = 2 * (int)pow(2, x) - 1;

    int* st = new int[max_size];

    constructSTUtil(arr, 0, n - 1, st, 0);

    return st;
}

int arr[100000000];

int main()
{
    int n,i,a,k,l,r,q,b,c,maxp=INT_MIN;
    cin>>n;
    vector<int> brr;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        maxp = max(a,maxp);
        arr[a] = max(arr[a],b);
        brr.push_back(a);
    }

    int* st = constructST(arr, maxp+1);

    while(q--)
    {
        cin>>l>>r; // price range (both inclusive)
        a = getMax(st,maxp,l,r);
        if(a == 0)
        {
            a = -1;
        }
        cout<<a<<endl;
    }

    return 0;
}
/*
5
1000 300
1100 400
1300 200
1700 500
2000 600
3
1000 1400
*/
