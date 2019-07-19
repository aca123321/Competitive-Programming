#include<iostream>
#include<iomanip>

using namespace std;

main()
{
    int n,*p,i,sum=0;
    float s;

    cin>>n;

    p = new int[n];

    for(i=0;i<n;i++)
    {
        cin>>p[i];
        sum += p[i];
    }

    s = float(sum)/float(n*100);

    cout<<fixed;
    cout<<setprecision(10);
    cout<<s*100;

}
