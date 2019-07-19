#include<bits/stdc++.h>
using namespace std;

main()
{
    int i,j=0,n;

    char c;
    stringstream ss;
    string s,line;

    ss.clear();

    while(getline(cin,line))
    {
        if(int(line[0]) == 26)
        {
            break;
        }

        else
        {
            s += line;
        }
    }

    cout<<s;
}
