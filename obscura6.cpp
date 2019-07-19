#include<bits/stdc++.h>
using namespace std;

main()
{
    int i,n;
    string s,a[26],t;
    char c,d;
    map<char,string> m;

    a[0] = "/-\\";
    a[1] = "B";
    a[2] = "(";
    a[3] = "|)";
    a[4] = "E" ;
    a[5] = "F";
    a[6] = "G";
    a[7] = "|-|";
    a[8] = "I";
    a[9] = "J";
    a[10] = "|<";
    a[11] = "|_";
    a[12] = "|\\/|";
    a[13] = "|\\|";
    a[14] = "()";
    a[15] = "P";
    a[16] = "Q";
    a[17] = "R";
    a[18] = "$";
    a[19] = "T";
    a[20] = "|_|";
    a[21] = "\\/";
    a[22] = "\\/\\/";
    a[23] = "><";
    a[24] = "Y";
    a[25] = "Z";

    for(i=0;i<=25;i++)
    {
        c = (char)(97+i);
        d = (char)(65+i);
        m.insert(make_pair(c,a[i]));
        m.insert(make_pair(d,a[i]));
    }

    getline(cin,s);

    n = s.length();

    map<char,string> :: iterator it;

    for(i=0;i<n;i++)
    {
        c = s[i];
        it = m.find(c);
        if(it == m.end())
        {
            cout<<c<<" ";
        }

        else
        {
            cout<<m[c]<<" ";
        }
    }
}
