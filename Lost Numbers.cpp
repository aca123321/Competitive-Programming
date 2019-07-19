#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli i,n,j,k,a,b,maxi;
    lli mat[6][6];
    lli last[6]={0};
    lli arr[6] = {4,8,15,16,23,42};
    lli ans[6] = {0};
    lli test[4][3] = {0};
    lli r[4] = {0};
    vector< pair < lli,lli > > v[1765];
    map<lli, lli> m;

    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            mat[i][j] = arr[i]*arr[j];
            v[mat[i][j]].pb({arr[i],arr[j]});
            v[mat[i][j]].pb({arr[j],arr[i]});
        }
    }
/*
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            cout<<setw(4)<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
*/
    for(i=0;i<4;i++)
    {
        cout<<"? "<<i+1<<" "<<i+2<<endl;
        fflush(stdout);
        cin>>a;
        fflush(stdin);
        r[i] = a;
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            test[j][i] = 0;
        }
    }

    test[0][0] = v[r[0]][0].f;
    test[0][1] = v[r[0]][0].sec;
    test[1][0] = v[r[0]][1].f;
    test[1][1] = v[r[0]][1].sec;



    test[2][1] = v[r[1]][0].f;
    test[2][2] = v[r[1]][0].sec;
    test[3][1] = v[r[1]][1].f;
    test[3][2] = v[r[1]][1].sec;

    m.clear();
    for(j=0;j<4;j++)
    {
        m[test[j][1]]++;
    }
    maxi=0;
    for(auto it: m)
    {
        if(it.sec > maxi && it.f != 0)
        {
            maxi = it.sec;
            a = it.f;
        }
    }
    ans[1] = a;
    ans[0] = r[0]/a;
    ans[2] = r[1]/a;
    ans[3] = r[2]/ans[2];
    ans[4] = r[3]/ans[3];

    for(i=0;i<5;i++)
    {
        for(j=0;j<6;j++)
        {
            if(arr[j] == ans[i])
            {
                last[j] = 1;
                break;
            }
        }
    }

    for(i=0;i<6;i++)
    {
        if(last[i] == 0)
        {
            ans[5] = arr[i];
        }
    }

    cout<<"! ";
    for(i=0;i<6;i++)
    {
        cout<<ans[i]<<" ";
    }

}
