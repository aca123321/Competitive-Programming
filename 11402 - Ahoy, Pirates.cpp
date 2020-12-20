#include<bits/stdc++.h>
using namespace std;

#define lli int
#define f first
#define sec second
#define pb push_back

lli st[4096001],arr[1024001], lazy[4096001],maxi;

lli left(lli p)
{
    return p*2;
}

lli right(lli p)
{
    return ((p*2) + 1);
}

lli num(lli i, lli j)
{
    return (j-i+1);
}

void build(lli p, lli l, lli r)
{
    if(l == r)
    {
        st[p] = arr[l];
        maxi = max(maxi,p);
    }
    else
    {
        build(left(p), l , ((l+r)/2));
        build(right(p), ((l+r)/2)+1, r);

        st[p] = st[left(p)] + st[right(p)];
    }
    cout<<"st["<<p<<"] = "<<st[p]<<endl;
}

lli sum(lli p, lli l, lli r, lli i, lli j)
{
    if(l>j || r<i)
    {
        return 0;
    }
    if(l>=i && r<=j)
    {
        if(lazy[p] == 0)
        {
            st[p] = 0;
            lazy[left(p)] = 0;
            lazy[right(p)] = 0;
        }
        else if(lazy[p] == 1)
        {
            st[p] = num(l,r);
            lazy[left(p)] = 1;
            lazy[right(p)] = 1;
        }
        else if(lazy[p] == -1)
        {
            st[p] = num(l,r) - st[p];
            if(lazy[left(p)] == 1)
            {
                lazy[left(p)] = 0;
            }
            else if(lazy[left(p)] == 0)
            {
                lazy[left(p)] = 1;
            }
            else if(lazy[left(p)] == -1)
            {
                lazy[left(p)] = INT_MAX;
            }
            else
            {
                lazy[left(p)] = -1;
            }

            if(lazy[right(p)] == 1)
            {
                lazy[right(p)] = 0;
            }
            else if(lazy[right(p)] == 0)
            {
                lazy[right(p)] = 1;
            }
            else if(lazy[right(p)] == -1)
            {
                lazy[right(p)] = INT_MAX;
            }
            else
            {
                lazy[right(p)] = -1;
            }
        }
        lazy[p] = INT_MAX;
        return st[p];
    }
    else
    {
        return (sum(left(p),l,((l+r)/2),i,j) + sum(right(p), ((l+r)/2)+1, r, i,j));
    }
}

// updating over a range
void update(lli p, lli l, lli r, lli i, lli j, lli val)
{
    if(l>j || r<i)
    {
        return;
    }
    if(l>=i && r<=j)
    {
        cout<<"updating range "<<i<<" to "<<j<<" with value "<<val<<endl;
        st[p] = num(l,r)*val;
        cout<<"st["<<p<<"] after update = "<<st[p]<<endl;
        lazy[left(p)] = val;
        lazy[right(p)] = val;
    }
    else
    {
        update(left(p), l, ((l+r)/2), i, j, val);
        update(right(p), ((l+r)/2)+1, r, i, j, val);
    }
}

void invert(lli p, lli l, lli r, lli i, lli j)
{
    if(l>j || r<i)
    {
        return;
    }

    if(l>=i && r<=j)
    {
        if(lazy[p] == 1)
        {
            st[p] = 0;
            lazy[left(p)] = 0;
            lazy[right(p)] = 0;
        }
        else if(lazy[p] == 0)
        {
            st[p] = 1;
            lazy[left(p)] = 1;
            lazy[right(p)] = 1;
        }
        else if(lazy[p] == -1)
        {
            if(lazy[left(p)] == 1)
            {
                lazy[left(p)] = 0;
            }
            else if(lazy[left(p)] == 0)
            {
                lazy[left(p)] = 1;
            }
            else if(lazy[left(p)] == -1)
            {
                lazy[left(p)] = INT_MAX;
            }
            else
            {
                lazy[left(p)] = -1;
            }

            if(lazy[right(p)] == 1)
            {
                lazy[right(p)] = 0;
            }
            else if(lazy[right(p)] == 0)
            {
                lazy[right(p)] = 1;
            }
            else if(lazy[right(p)] == -1)
            {
                lazy[right(p)] = INT_MAX;
            }
            else
            {
                lazy[right(p)] = -1;
            }
        }
        else
        {
            st[p] = num(l,r) - st[p];
            lazy[left(p)] = -1;
            lazy[right(p)] = -1;
        }
        lazy[p] = INT_MAX;
    }
    else
    {
        if(lazy[p] == 1)
        {
            st[p] = num(l,r);
            lazy[left(p)] = 1;
            lazy[right(p)] = 1;
        }
        if(lazy[p] == 0)
        {
            st[p] = 0;
            lazy[left(p)] = 0;
            lazy[right(p)] = 0;
        }
        if(lazy[p] == -1)
        {
            st[p] = num(l,r) - st[p];
            lazy[left(p)] = -1;
            lazy[right(p)] = -1;
        }
        invert(left(p), l, ((l+r)/2), i, j);
        invert(right(p), ((l+r)/2)+1, r, i, j);
    }
}

main()
{
    lli n,m,i,j,k,t,times,q,a,b,ns,tempans,start,total;
    vector<lli> ans;

    cin>>t;
    char c;

    string s;

    for(k=0;k<t;k++)
    {
        cin>>m;
        ans.clear();

        start = 0;

        for(i=0;i<m;i++)
        {
            cin>>times;
            cin>>s;

            ns = s.length();
            n = ns*times;

            for(j=0;j<n;j++)
            {
                a = j%(ns);
                if(s[a] == '1')
                {
                    arr[start+j] = 1;
                }
                else
                {
                    arr[start+j] = 0;
                }
            }

            start += n;
        }

        cout<<"start = "<<start<<endl;

        cout<<"arr:\n";
        for(i=0;i<start;i++)
        {
            cout<<arr[i]<<endl;
        }

        maxi = 0;
        build(1,0,start-1);
        for(i=0;i<=maxi;i++)
        {
            lazy[i] = INT_MAX;
        }
        n = start;

        cin>>q;
        while(q--)
        {
            cin>>c;
            cin>>a>>b;

            cout<<"n = "<<n<<endl;
            if(c == 'F')
            {
                update(1,0,n-1,a,b,1);
            }
            else if(c == 'E')
            {
                update(1,0,n-1,a,b,0);
            }
            else if(c == 'I')
            {
                invert(1,0,n-1,a,b);
            }
            else
            {
                tempans = sum(1,0,n-1,a,b);
                ans.pb(tempans);
            }

            cout<<"Trees built:\n";
            for(i=1;i<=maxi;i++)
            {
                cout<<i<<" -> ("<<st[i]<<", "<<lazy[i]<<")"<<endl;
            }
        }

        cout<<"Case "<<k+1<<":\n";
        for(i=0;i<ans.size();i++)
        {
            cout<<"Q"<<i+1<<": "<<ans[i]<<endl;
        }

    }
}
