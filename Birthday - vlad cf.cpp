#include<bits/stdc++.h>
using namespace std;

#define lli long long int

struct s
{
    lli diff,x,y;
};

lli comp(struct s p, struct s q)
{
    if(p.diff<q.diff)
    {
        return true;
    }

    else
    {
        return false;
    }
}

main()
{
    lli i,n,a,b,j,mini;
    map<lli ,lli> m;
    vector<s> v;
    vector<lli> ans;

    struct s temp;

    cin>>n;
    lli arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        //m[arr[i]]++;
    }
/*
    for(i=0;i<n;i++)
    {
        mini = INT_MAX;
        a = arr[i];

        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                b = arr[j];
            }
        }

        temp.x = a;
        temp.y = b;
        temp.diff = abs(a-b);

        v.push_back(temp);
    }

    sort(v.begin(),v.end(), comp);
    sort(arr,arr+n);

    for(auto it: v)
    {
        if(m[it.x] > 0)
        {
            if(it.x == it.y)
            {
                if(m[it.y] > 1)
                {
                    m[it.x] -= 2;
                    ans.push_back(it.x);
                    ans.push_back(it.x);
                }
            }

            else
            {
                if(m[it.y]>0)
                {
                    m[it.x] -= 1;
                    m[it.y] -= 1;
                    ans.push_back(it.x);
                    ans.push_back(it.y);
                }
            }
        }
    }
*/
    sort(arr,arr+n);

    for(i=0;i<n;i++)
    {
        if(i!=(n-1))
        {
            cout<<arr[i]<<" ";
        }

        else
        {
            cout<<arr[i];
        }
    }

}
