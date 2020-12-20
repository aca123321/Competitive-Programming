#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,a,t,b,c,k,j;

    cin>>t;
    string s[51];
    vector<lli> v;

    while(t--)
    {
        cin>>n;
        v.clear();
        a = 0;
        b = 0;
        c = 0;
        for(i=0;i<n;i++)
        {
            cin>>s[i];
            for(j=0;j<s[i].length();j++)
            {
                if(s[i][j] == '1')
                {
                    a++;
                }
                else
                {
                    b++;
                }
            }
            v.pb(s[i].length());
        }


        for(auto it: v)
        {
            if(it%2 != 0)
            {
                if(a%2 != 0)
                {
                    a--;
                }
                else if(b%2 != 0)
                {
                    b--;
                }
                else if(a>0)
                {
                    a--;
                }
                else if(b>0)
                {
                    b--;
                }
                it--;
            }
            cout<<"#"<<it<<" "<<a<<" "<<b<<endl;
        }
        c = 0;
        for(auto it: v)
        {
            if(it<=a)
            {
                a -= it;
                it = 0;
                c++;
            }
            else if(it<=b)
            {
                b -= it;
                it = 0;
                c++;
            }
            else
            {
                if((a%2 == 0) && (b%2 == 0))
                {
                    c++;
                }
            }
        }

        cout<<c<<endl;
    }


}
