#include<iostream>
#include<string>
using namespace std;

main()
{
    int n,i,j,c,arr[26];
    string x;

    cin>>n>>x;

    if(n<26)
    {
        cout<<"NO";
    }

    else
    {
        for(i=97;i<123;i++)
        {
            arr[i-97] = i;
        }

        for(i=0;i<n;i++)  // all in small
        {
            if(x[i]<91)
            {
                x[i] += 32;
            }
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<26;j++)
            {
                if(arr[j] == x[i])
                {
                    arr[j] = 0;
                    break;
                }
            }
        }

        c = 0;

        for(i=0;i<26;i++)
        {
            if(arr[i] != 0)
            {
                c = 1;
            }
        }

        if(c == 1)
        {
            cout<<"NO";
        }

        else
        {
            cout<<"YES";
        }
    }
}

