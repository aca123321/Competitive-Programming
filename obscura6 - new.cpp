#include<bits/stdc++.h>
using namespace std;

main()
{
    int n,i;
    map<char,string> m;
    string s;

    m.insert({'(',"1100"});
    m.insert({'B',"01100"});
    m.insert({' ',"0001"});
    m.insert({'$',"11111"});
    m.insert({'E',"1101"});
    m.insert({'F',"00101"});
    m.insert({'G',"01101"});
    m.insert({')',"10101"});
    m.insert({'I',"1001"});
    m.insert({'J',"10100001"});
    m.insert({'.',"101001"});
    m.insert({'/',"0011"});
    m.insert({'<',"11100"});
    m.insert({'-',"0101"});
    m.insert({'\\',"1000"});
    m.insert({'P',"11110"});
    m.insert({'Q',"10100000"});
    m.insert({'R',"1011"});
    m.insert({'\\',"0100"});
    m.insert({'T',"0111"});
    m.insert({'^',"0000"});
    m.insert({'|',"001001"});
    m.insert({'_',"11100"});
    m.insert({'>',"001000"});
    m.insert({'Y',"11101"});
    m.insert({'Z',"1010001"});

    getline(cin,s);
    n = s.length();

    for(i=0;i<n;i++)
    {
        cout<<m[s[i]]<<" ";
    }
}
