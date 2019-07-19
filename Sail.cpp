#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define s second
#define f first

main()
{
    lli n,xa,xb,i,ya,yb,flag=0,diffx,diffy;

    cin>>n>>xa>>ya>>xb>>yb;
    string s;
    diffx = xb-xa;
    diffy = yb-ya;

    cin>>s;

    for(i=0;i<n;i++)
    {
        if(s[i]=='E' && diffx>0)
        {
            diffx--;
        }

        else if(s[i]=='W' && diffx<0)
        {
            diffx++;
        }

        else if(s[i]=='N' && diffy>0)
        {
            diffy--;
        }
        else if(s[i]=='S' && diffy<0)
        {
            diffy++;
        }

        if(diffx == 0 && diffy == 0)
        {
            cout<<i+1;
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        cout<<-1;
    }
}
