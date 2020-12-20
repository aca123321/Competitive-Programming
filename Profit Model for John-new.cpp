#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define pb push_back
#define sec second

map<lli, vector<lli>> m;
vector<lli> v;
vector<pair<lli,lli>> ans;
lli k,ind;

bool f(lli i)
{
    if(m[k][i] > ind)
    {
        return true;
    }
    else
    {
        return false;
    }
}

lli bin_search(lli low,lli high)
{
    lli mid = (low+high)/2;
    lli a;
    //cout<<"low, high = "<<low<<", "<<high<<endl;

    if(low>high)
    {
        return -1;
    }
    if(low == high-1)
    {
        if(f(low))
        {
            return m[k][low];
        }
        if(f(high))
        {
            return m[k][high];
        }
        return -1;
    }
    if(low == high)
    {
        if(f(low))
        {
            return m[k][low];
        }
    }

    if(!f(mid))
    {
        return bin_search(mid+1, high);
    }
    else
    {
        return bin_search(low, mid);
    }
}

main()
{
    lli n,i,j,t,a,b,c,flag=1;

    cin>>n>>t;

    for(i=0;i<n;i++)
    {
        cin>>a;
        v.pb(a);
        m[a].pb(i);
    }

    /*
    for(auto it: m)
    {
        //sort(it.sec.begin(), it.sec.end());
        cout<<it.f<<":\n";
        for(auto iit: it.sec)
        {
            cout<<iit<<" ";
        }
        cout<<endl;
    }
    */

    for(j=0;j<t;j++)
    {
        cin>>a;
        ans.clear();
        flag = 0;
        for(i=0;i<n;i++)
        {
            k = a + v[i];
            ind = i;

            if(m.find(k) != m.end())
            {
                /*
                cout<<"searching in:\n";
                for(auto it: m[k])
                {
                    cout<<it<<" ";
                }
                cout<<"\nfor "<<k<<">"<<ind<<" position\n";
                */

                b = bin_search(0, m[k].size()-1); // binary search on m[k] vector
                //cout<<"got "<<b<<endl;
                if(b != -1)
                {
                    ans.pb({b,ind});
                    flag = 1;
                }
            }
        }
        if(flag == 1)
        {
            a = INT_MIN;
            b = INT_MAX;
            for(i=0;i<ans.size();i++)
            {
                if(ans[i].f < b)
                {
                    b = ans[i].f;
                    a = ans[i].sec;
                }
                else if(ans[i].f == b)
                {
                    if(ans[i].sec > a)
                    {
                        a = ans[i].sec;
                    }
                }
            }
            cout<<a+1<<" "<<b+1;
        }
        else
        {
            cout<<-1;
        }
        if(j < t-1)
        {
            cout<<",";
        }
    }
}

/*
6 2
3 6 9 8 2 4
3 1 2 1 4 5
*/
