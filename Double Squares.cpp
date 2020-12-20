#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define lld long double
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,t,j,x,count,y,b,c;
    lld a;
    map<lli, lli> m;

    cin>>t;
    ofstream file;
    file.open("Double_Squares_Output.txt");

    for(j=1;j<=t;j++)
    {
        cin>>x;
        count=0;
        m.clear();

        for(i=0;i<=sqrt(x);i++)
        {
            a = sqrt(x-(i*i));

            if(floor(a) == ceil(a))
            {
                b = min(int(a),int(i));
                if(m[b] == 0)
                {
                    count++;
                    m[b]++;
                }
            }
        }
        if(x == 0)
        {
            count = 1;
        }
        cout<<"Case #"<<j<<": "<<count<<"\n";
        file<<"Case #"<<j<<": "<<count<<"\n";
    }
    file.close();
}
