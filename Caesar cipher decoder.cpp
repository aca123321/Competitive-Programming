
#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,i,key=0;

    cout<<"Enter the key:\n";
    cin>>key;
    key %= 26;

    fflush(stdin);
    cout<<"Enter the string to be decoded\n";
    string s;
    fflush(stdout);
    getline(cin,s);
    fflush(stdin);
    n = s.length();
    for(i=0;i<n;i++)
    {
        if(s[i] <= 'z' && s[i]>='a')
        {
            s[i] = char('a' + (26 + s[i] - 'a' - key)%26 );
        }
    }

    cout<<"The decoded string is:\n"<<s;

}
