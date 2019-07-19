#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,k,a,x,y,p;
    string s,t;

    cin>>k;

    while(k--)
    {
        cin>>n;
        cin>>s;
        t = s;
        p = 0;
        x = 0;

        for(i=0;i<n;i++)
        {
            if(s[i] == 'P')
            {
                p++;
            }
            else if(i>1 && i<n-2 && (t[i-1]=='P' || t[i-2] == 'P') && (t[i+1]=='P' || t[i+2] == 'P'))
            {
                x++;
            }
        }
        a = n-p;

        if(double(double(p)/double(n)) >= 0.75)
        {
            cout<<0<<endl;
        }
        else
        {
            y = ceil(double(double(double(3*n)-double(4*p))/double(4)));
            if(x < y)
            {
                cout<<"-1\n";
            }
            else
            {
                cout<<y<<endl;
            }
        }
    }

}
