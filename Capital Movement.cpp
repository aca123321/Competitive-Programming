#include<bits/stdc++.h>
using namespace std;

#define f first
#define s second

vector<int> graph[50002];
int inf[50002];

main()
{
    int a,b,i,n,t,j;

    cin>>t;

    vector< pair < int , int > > arr;

    while(t--)
    {
        cin>>n;

        arr.clear();

        for(i=1;i<=n;i++)
        {
            cin>>a;
            arr.push_back({a,i}); // first -> population, second -> index
            graph[i].clear();
            inf[i] = 0;
        }

        for(i=1;i<=n-1;i++)
        {
            cin>>a>>b;
            graph[a].push_back(b);
            graph[b].push_back(a);
        }

        sort(arr.begin(),arr.end());

        for(i=1;i<=n;i++)
        {
            inf[i] = i;

            for(auto iit: graph[i])
            {
                inf[iit] = i;
            }

            for(j=n-1;j>=0;j--)
            {
                if(inf[arr[j].s] != i)
                {
                    cout<<arr[j].s<<" ";
                    break;
                }
            }
        }

        cout<<endl;
    }
}

