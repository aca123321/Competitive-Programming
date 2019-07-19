#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,type,y;
    string x;

    cin>>n;

    map< string , int > m;
    map<string, int > :: iterator i;


    while(n--)
    {
        cin>>type;

        if(type == 1)
        {
            cin>>x;
            cin>>y;

            i = m.find(x);

            if( i == m.end())
            {
                m.insert( make_pair(x , y) );
            }

            else
            {
                m[x] += y;
            }
        }

        else
        {
            cin>>x;

            if(type == 2)
            {
                m.erase(x);
            }

            else
            {
                cout<<m[x]<<endl;
            }
        }
    }

    return 0;
}
