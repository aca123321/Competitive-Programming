#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,i,q,j;
    cin>>q;
    string a[q],b[q];

    for(i=0;i<q;i++)
    {
        cin>>n;
        string s;
        cin>>s;

        a[i] = "";
        b[i] = "";

        if(n>=3)
        {
            a[i] += s[0];

            for(j=1;j<n;j++)
            {
                b[i] += s[j];
            }
        }

        else
        {
            if(int(s[1]) <= int(s[0]))
            {
                a[i] += "#";
                b[i] += "#";
            }

            else
            {
                a[i] += s[0];
                b[i] += s[1];
            }
        }
    }

    for(i=0;i<q;i++)
    {
        if(a[i][0] != '#')
        {
            cout<<"YES\n";
            cout<<2<<endl;
            cout<<a[i]<<" "<<b[i];
            if(i != q-1)
            {
                cout<<endl;
            }
        }

        else
        {
            cout<<"NO";
            if(i != q-1)
            {
                cout<<endl;
            }
        }
    }

}
