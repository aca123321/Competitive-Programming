#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,i,c,mini,maxi,t,flag[26];
    string s;

    cin>>t;

    while(t--)
    {
        cin>>s;
        n = s.length();
        mini = INT_MAX;
        maxi = INT_MIN;
        c = 0;

        for(i=0;i<26;i++)
        {
            flag[i] = 0;
        }

        for(i=0;i<n;i++)
        {
            flag[(int(s[i])-int('a'))]++;
            if((int(s[i])-int('a')) < mini)
            {
                mini = int(s[i])-int('a');
            }
            if((int(s[i])-int('a')) > maxi)
            {
                maxi = (int(s[i])-int('a'));
            }
        }

        for(i=mini;i<=maxi;i++)
        {
            if(flag[i] != 1)
            {
                c = 1;
                break;
            }
        }

        if(c == 1)
        {
            cout<<"No"<<endl;
        }

        else
        {
            cout<<"Yes"<<endl;
        }
    }

}
