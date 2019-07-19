#include<iostream>
#include<string>
#include<cctype>
using namespace std;

main()
{
    int hrcur,mincur,hrex,minex,min,i,t,k,del,treq,tcur,tex;

    string tc,te,*s,hrc[2],hre[2],minc[2],mine[2];

    cin>>t;

    s = new string[t];

    for(k=0;k<t;k++)
    {
        cin>>tc;
        cin>>treq;
        cin>>te;
        cin>>del;

        for(i=0;i<2;i++)
        {
            hrc[i] = tc[i];
            minc[i] = tc[i+3];

            hre[i] = te[i];
            mine[i] = te[i+3];
        }

        tcur = (int(hrcur)*60) + int(mincur);
        tex = (int(hrex)*60) + int(minex);

        cout<<tcur<<" "<<tex<<endl;

        if((tcur + treq + del)>tex)
        {
            s[k] = "No";
        }

        else
        {
            s[k] = "Yes";
        }
    }

    for(i=0;i<t;i++)
    {
        cout<<s[i]<<endl;
    }


}
