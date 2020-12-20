#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    b = 0;
    while(cin>>a)
    {
        while((a/3)-2 >= 0)
        {
            b += (a/3) - 2;
            a = (a/3) - 2;
        }
    }
    cout<<"answer is "<<b<<endl;
}

