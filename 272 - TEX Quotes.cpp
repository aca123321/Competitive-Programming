#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

int main()
{
    lli n,i,a;

    char c,t[200000];

    a = 0;
    while(gets(t))
    {
        for(i=0;t[i];i++)
        {
            if(t[i] == '\"')
            {
                a++;
                a = a%2;
                if(a == 1)
                {
                    cout<<"``";
                }
                else if(a == 0)
                {
                    cout<<"\'\'";
                }
            }
            else
            {
                cout<<t[i];
            }
        }
        cout<<"\n";
    }

    return 0;
}
