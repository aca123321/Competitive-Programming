#include<bits/stdc++.h>
using namespace std;

main()
{
    int n;
    string s;
    stringstream ss;

    // int to string conversion
    ss<<1324;
    ss>>s;
    s += "asd";
    cout<<s<<endl;

    ss.clear();

    // string to int conversion
    ss<<"123";
    ss>>n;
    n += 4;
    cout<<n;

}
