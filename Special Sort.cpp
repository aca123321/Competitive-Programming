#include<bits/stdc++.h>
using namespace std;

#define lli long long int

bool comp(pair <lli, lli> a, pair <lli, lli> b)
{
    if(a.first > b.first)
    {
        return false;
    }

    else
    {
        if(a.first == b.first && (a.second > b.second))
        {
            return false;
        }

        return true;
    }
}

int main()
{
    lli t,n,x,y;

    vector < pair <lli, lli> > v;

    vector < pair <lli, lli> > :: iterator i;

    scanf("%lli",&t);

    while(t--)
    {
        scanf("%lli",&n);

        while(n--)
        {
            scanf("%lli",&x);
            scanf("%lli",&y);

            v.push_back(make_pair(x,y));
        }

        i = v.begin();

        sort(v.begin(),v.end(),comp);

        while(i != v.end())
        {
            printf("%lli %lli\n",i->first,i->second);
            i++;
        }
    }

    return 0;
}
