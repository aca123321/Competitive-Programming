#include<bits/stdc++.h>
using namespace std;

main()
{
    int i,n;

    string s;

    cin>>s;

    char arr[51];

    n = s.length();

    if(n%2 == 0)
    {
        for(i=0;i<n;i++)
        {
            if(i<(n/2))
            {
                arr[n-2-(i*2)] = s[i];
            }

            else
            {
                arr[((i-(n/2))*2) + 1] = s[i];
            }
        }
    }

    else
    {
        for(i=0;i<n;i++)
        {
            if(i<=(n/2))
            {
                arr[n-1-(i*2)] = s[i];
            }

            else
            {
                arr[((i-(n/2)-1)*2) + 1] = s[i];
            }
        }
    }

    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
