#include<bits/stdc++.h>
using namespace std;

main()
{
    int i,j,a,b,n;

    n = 6;
    vector<int> v;
    deque<vector<pair<int, int>>> d;
    set<int> s = {4,6,2,7,4};

    d = {{{3, 4}, {5, 6}}, {{1, 2}, {3, 4}}};

    for(i=0;i<n;i++)
    {
        v.push_back((i+1)*2);
    }

    cout<<"Vector\n";
    for(auto i: v) // vector
    {
        cout<<i<<" ";
    }

    cout<<endl<<endl;

    cout<<"Deque\n";
    for(auto i:d) // deque
    {
        for(auto j:i)
        {
            cout<<j.first<<" "<<j.second<<endl;
        }

        cout<<"---"<<endl;
    }
    cout<<endl;

    cout<<"Set\n";
    for(auto i:s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
