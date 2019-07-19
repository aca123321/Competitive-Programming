#include<bits/stdc++.h>
#include<sstream>
using namespace std;

int main()
{
    int m,*arr,i,j,k,l,na,nb,min;
    string *str,temp;
    cin>>m;

    arr = new int[m];
    ostringstream *s;
    s = new ostringstream[m];
    str = new string[m];

    for(i=0;i<m;i++)
    {
        cin>>arr[i];
        s[i] << arr[i];
        str[i] = s[i].str();
    }

    for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(str[j][0]>str[i][0])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }

            else if(str[j][0] == str[i][0])
            {
                l = 1;
                k = 0;
                na = str[i].length();
                nb = str[j].length();

                min = (na<=nb)?na:nb;

                while(l)
                {
                    k++;
                    if(str[j][k] > str[i][k])
                    {
                        temp = str[i];
                        str[i] = str[j];
                        str[j] = temp;
                        l--;
                    }

                    else if(str[i][k] > str[j][k] )
                    {
                        l--;
                    }

                    else
                    {
                        if(k == min-1)
                        {
                            if(na >= min)
                            {
                                l--;
                            }

                        else
                        {
                            temp = str[i];
                            str[i] = str[j];
                            str[j] = temp;
                            l--;
                        }
                        }

                    }

                }
            }
        }
    }

    for(i=0;i<m;i++)
    {
        cout<<str[i];
    }

    return 0;
}

