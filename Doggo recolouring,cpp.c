#include<iostream>
#include<string>
using namespace std;

struct fr
{
    char c;
    long int freq;
};

main()
{
    long int i,n,*arr;
    string s;
    fr f[26];

    cin>>n;
    cin>>s;

    for(i=0;i<26;i++)
    {
        f[i].c = char(97 + i);
        f[i].freq = 0;
    }

    for(i=0;i<26;i++)
    {
        cout<<f[i].c<<" "<<f[i].freq<<endl;
    }

}
