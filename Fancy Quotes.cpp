#include<bits/stdc++.h>
using namespace std;

main()
{
    int i,n,t,flag;
    cin>>t;

    cin.ignore();

    while(t--)
    {
        string temp,s;
        flag = 0;

        getline(cin,temp);
        stringstream sso(temp);

        while(sso >> s)
        {
            if(s == "not")
            {
                cout<<"Real Fancy\n";
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            cout<<"regularly fancy\n";
        }
    }
}
