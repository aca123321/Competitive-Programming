#include<iostream>
using namespace std;

int t,s,e,i,k;

int main()
{
    cin>>t;

    while(t--)
    {
        cin>>s>>e;

        for(i=s;i<=e;i++)
        {
            for(k=2;k<i;k++)
            {
                if(i == 2)
                    cout<<"2"<<endl;

                else if(i%k == 0) // not a prime
                    break;

                else if(k == i-1) //k is just about to reach i but i is still not divisible by k
                    cout<<i<<endl;

            }
        }
    }
}
