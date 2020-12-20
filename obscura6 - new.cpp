#include<bits/stdc++.h>
using namespace std;

// Based on the text
// Remember, remember the Fifth of November, The Gunpowder Treason and Plot, I know of no reason Why the Gunpowder Treason Should ever be forgot.Guy Fawkes, Guy Fawkes, t'was his intent To blow up the Queen and Parli'ment. Three-score barrels of powder below, Poor old England to overthrow; By God's providence he was catch'd (or by God's mercy*) With a dark lantern and burning match. Holla boys, Holla boys, let the bells ring. Holloa boys, holloa boys, God save the Queen! And what should we do with him? Burn him!


main()
{
    int n,i;
    map<char,string> m;
    string s;

    m.insert({'(',"0111"});
    m.insert({'B',"00011"});
    m.insert({' ',"010001"});
    m.insert({'$',"00001"});
    m.insert({'E',"100"});
    m.insert({'F',"010000"});
    m.insert({'G',"10110"});
    m.insert({')',"0110"});
    m.insert({'I',"01001"});
    m.insert({'J',"1010001101"});
    m.insert({'.',"1010000"});
    m.insert({'/',"1110"});
    m.insert({'<',"000000"});
    m.insert({'-',"0101"});
    m.insert({'\\',"110"});
    m.insert({'P',"000001"});
    m.insert({'Q',"10100010"});
    m.insert({'R',"0010"});
    m.insert({',',"1111"});
    m.insert({'T',"0011"});
    m.insert({'^',"10101"});
    m.insert({'|',"101001"});
    m.insert({'_',"00010"});
    m.insert({'>',"1010001100"});
    m.insert({'Y',"10111"});
    m.insert({'Z',"101000111"});

    /*
    map<string,int> check;

    for(auto it: m)
    {
        check[it.second]++;
    }

    for(auto it: check)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    */


    getline(cin,s);
    n = s.length();

    for(i=0;i<n;i++)
    {
        cout<<m[s[i]];
    }

}
