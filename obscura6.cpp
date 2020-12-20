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

// Not like the brazen giant of Greek fame, With conquering limbs astride from land to land Here at our sea-washed, sunset gates shall stand A mighty woman with a torch, whose flame Is the imprisoned lightning, and her name Mother of Exiles. From her beacon-hand Glows world-wide welcome her mild eyes command The air-bridged harbor that twin cities frame. “Keep, ancient lands, your storied pomp!” cries she With silent lips. “Give me your tired, your poor, Your huddled masses yearning to breathe free, The wretched refuse of your teeming shore. Send these, the homeless, tempest-tost to me, I lift my lamp beside the golden door!”

// CONGREGATI EX TOTO ORBE MATHEMATICI OB SCRIPTA INSIGNIA TRIBUERE

//You were chosen in X as Time magazine's Person of the Year. The magazine set out to recognize the millions of people who anonymously contribute user-generated content to wikis and other websites such as Wikipedia, YouTube, MySpace, Facebook, and the multitudes of other websites featuring user contribution.
