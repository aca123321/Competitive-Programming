#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

struct s
{
    lli a, b;
};

bool comp(struct s x, struct s y)
{
    if(x.a < y.a)
    {
        return true;
    }
    else if(x.a == y.a)
    {
        if(x.b > y.b)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}

main()
{
    lli n,i,t,a,b,c,j;

    cin>>n>>a;
    struct s arr[n];
    map<lli,lli> m;

    for(i=0;i<n;i++)
    {
        cin>>b>>c;
        arr[i].a = b;
        arr[i].b = c;
    }

    sort(arr,arr+n,comp);
    lli ind=-1;
    lli pre = ind;
    b = INT_MIN;

    for(i=0;i<n;i++)
    {
        b = INT_MIN;
        for(j=0;j<n;j++)
        {
            if(a>=arr[j].a && m[j] == 0)
            {
                if(b<arr[j].b)
                {
                    b = arr[j].b;
                    ind = j;
                    //cout<<ind<<"selected ";
                }
            }
        }

        //cout<<ind<<"#"<<endl;

        if(pre == ind)
        {
            cout<<"NO#";
            return 0;
        }

        a += arr[ind].b;
        //cout<<endl<<"new a = "<<a<<endl;
        m[ind]++;
        cout<<"m["<<ind<<"] = "<<m[ind]<<endl;
        pre = ind;
    }

    if(m.size() == n)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
