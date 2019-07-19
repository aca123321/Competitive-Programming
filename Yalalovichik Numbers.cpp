#include<bits/stdc++.h>
using namespace std;

#define lli unsigned long long int

main()
{
    lli t,n,i,x,j,ans;

    string os,s,res,temp;
    char c[1];

    cin>>t;

    while(t--)
    {
        cin>>x;

        res = "";
        s = "";

        ostringstream st;
        st<<x;

        os = st.str();

        n = os.length();
        s = os+os;

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                res = res+s[i+j];
            }
        }

        ans = 0;

        stringstream yalk(res);
        yalk>>ans;
        cout<<(ans%(1000000007))<<endl;
    }
}
