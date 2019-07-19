#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    lli m,n,i,val,sum;
    string posn,temp;

    cin>>m>>n;

    map< string, lli> mp;

    for(i=0;i<m;i++)
    {
        cin>>posn;
        cin>>val;

        mp.insert(make_pair(posn,val));
    }

    for(i=0;i<n;i++)
    {
        sum = 0;

        while(1)
        {
            cin>>temp;
            sum += mp[temp];
            cin.ignore();

            if(temp == ".")
            {
                break;
            }
        }

        cout<<sum<<endl;
    }

    return 0;
}
