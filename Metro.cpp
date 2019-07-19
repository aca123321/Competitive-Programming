#include<bits/stdc++.h>
using namespace std;

struct oc
{
    int o,c;
};

main()
{
    int n,s,i,flag = 0;
    oc *arr;

    cin>>n>>s;
    arr = new oc[n+1];

    for(i=1;i<n+1;i++)
    {
        cin>>arr[i].o;
    }

    for(i=1;i<=n;i++)
    {
        cin>>arr[i].c;
    }

    if(arr[1].o == 0)
    {
        cout<<"NO";
    }

    else
    {
        if(arr[s].o == 1)
        {
            cout<<"YES";
        }

        else
        {
            if(arr[s].c == 1)
            {
                for(i=(s+1);i<=n;i++)
                {
                    if(arr[i].o == 1 && arr[i].c == 1)
                    {
                        cout<<"YES";
                        flag = 1;
                        break;
                    }
                }

                if(flag == 0)
                {
                    cout<<"NO";
                }
            }

            else
            {
                cout<<"NO";
            }
        }
    }
}
