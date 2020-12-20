#include<bits/stdc++.h>
using namespace std;

#define lli int

main()
{
    lli n,i,t,a,b,c,k,x;
    string s;
    vector<lli> v;

    cin>>t;

    for(k=0;k<t;k++)
    {
        cin>>s;
        n = s.length();
        a = 0;
        v.clear();

        for(i=0;i<n;i++)
        {
            if(s[i] != '0')
            {
                b = 1;
                for(lli j=0;j<n-1-i;j++)
                {
                    b *= 10;
                }
                stringstream obj;
                obj<<s[i];
                obj>>c;
                obj.clear();
                lli d = c*b;
                if(d != 0)
                {
                    v.push_back(d);
                }
            }
        }

        cout<<v.size()<<endl;
        for(auto it: v)
        {
            cout<<it<<" ";
        }
        if(k < t-1)
        {
            cout<<endl;
        }
    }


}
