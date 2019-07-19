#include<bits/stdc++.h>  //this is not a complete solution
using namespace std;

struct two
{
    int a,b;
};

main()
{
    int n,i,val,max,min;
    string str,ans;

    map <string, struct two> game;

    map <string, struct two > :: iterator itr;

    cin>>n;
    max = INT_MIN;

    for(i=0;i<n;i++)
    {
        cin>>str;
        cin>>val;

        itr = game.find(str);

        if(itr == game.end())
        {
            struct two x;
            x.a = val;
            x.b = 0;

            game.insert(str,x);
            itr = game.find(str);
            if((itr->second).a >= max)
            {
                max = (itr->second).a;
                ans = itr->first;
                (itr->second).b = i;
            }
        }

        else
        {
            (itr->second).a += val;

            if((itr->second).a >= max)
            {
                max = (itr->second).a;
                ans = itr->first;
                (itr->second).b = i;
            }
        }
    }

    min = 999999;

    for(itr = game.begin();itr != game.end();itr++)
    {
        if((itr->second).a == max)
        {
            if((itr->second).b < min)
            {
                min = (itr->second).b;
                ans = itr->first;
            }

        }
    }

    cout<<ans;

}
