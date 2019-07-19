#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define s second

main()
{
    lli n,i,a,b,x;
    cin>>n;
    lli arr[n];
    vector<pair<lli,lli>> ve,vo;
    deque<pair<lli,lli>> de,doo;
    deque<pair<lli,lli>>::iterator it;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];

        if(arr[i]%2 == 0)
        {
            ve.pb({arr[i],i});
        }
        else
        {
            vo.pb({arr[i],i});
        }
    }

    sort(ve.begin(),ve.end());
    sort(vo.begin(),vo.end());

    /*

    for(i=0;i<ve.size();i++)
    {
        cout<<ve[i].f<<" "<<ve[i].s<<endl;
    }
    cout<<endl;

    for(i=0;i<vo.size();i++)
    {
        cout<<vo[i].f<<" "<<vo[i].s<<endl;
    }
    cout<<endl;

    */

    for(auto it: ve)
    {
        de.pb(it);
    }

    for(auto it: vo)
    {
        doo.pb(it);
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]%2 == 0)
        {
            if((doo.empty()==false))
            {
                if(arr[i]>(doo.front()).f)
                {
                    if(i<(doo.front()).s)
                    {
                        a = arr[i];
                        it = find(de.begin(), de.end(), make_pair(arr[i],i));
                        it->s = (doo.front()).s;
                        arr[i] = arr[(doo.front()).s];
                        arr[(doo.front()).s] = a;
                        doo.pop_front();
                    }
                }
            }
        }

        else
        {
            if((de.empty()==false))
            {
                if(arr[i]>(de.front()).f)
                {
                    if(i<(de.front()).s)
                    {
                        a = arr[i];
                        arr[i] = arr[(de.front()).s];
                        arr[(de.front()).s] = a;
                        de.pop_front();
                        it = find(doo.begin(), doo.end(), make_pair(arr[i],i));
                        it->s = (de.front()).s;
                    }
                }
            }
        }
    }

    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
