#include<iostream>
using namespace std;

main()
{
    int n,m,i,j;

    cin>>n>>m;

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i%2 == 0)
            {
                cout<<"#";
            }

            else
            {
                if((i/2)%2 == 0)
                {
                    if(j == m-1)
                        cout<<"#";

                    else
                        cout<<".";
                }

                else
                {
                    if(j == 0)
                        cout<<"#";

                    else
                        cout<<".";
                }
            }
        }
        cout<<endl;
    }
}
