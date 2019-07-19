#include<bits/stdc++.h>
using namespace std;

main()
{
    int a = 0,n,i;
    string s;

    cin>>n;

    while(n--)
    {
        cin>>s;

        for(i=0;i<3;i++)
        {
            if(s[i] == '+')
            {
                a++;
                break;
            }

            else if(s[i] == '-')
            {
                a--;
                break;
            }
        }
    }

    cout<<a;
}
