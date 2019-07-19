#include<bits/stdc++.h>
using namespace std;

main()
{
    long long int t,i,pc,pk,k;

    cin>>t;

    while(t--)
    {
        cin>>pc>>pk>>k;

        if(((pc+pk)/k)%2 == 0)
        {
            cout<<"CHEF\n";
        }

        else
        {
            cout<<"COOK\n";
        }
    }
}
