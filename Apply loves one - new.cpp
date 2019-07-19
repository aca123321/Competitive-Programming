#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,q,k,l,b=0,i,j,*arr,*posn,num=0,*query,a=0,max=0,pre=0,smax,spre,emax,epre,shiftcount=0,*ans,c;
    string str;


    cin>>n>>q>>k;
    ans = new lli[q];

    arr = new lli[n];
    posn = new lli[n+2]; // posn[i] keeps the position/index of i th zero in arr
    query = new lli[q];

    posn[0] = -1;

    j=0;

    for(i=0;i<n;i++) // array input and also initialising the position-of-zero-array
    {
        cin>>arr[i];
        if(arr[i] == 0)
        {
            posn[j+1] = i;
            j++;
        }
    }

    num = j; // gives the number of zeroes in the array actually
    posn[num+1] = n;

    cin>>str;

    for(i=0;i<q;i++)  // converts the query from string to array (q characters/queries)
    {
        if(str[i] == '!')
        {
            query[i] = 1;
        }

        else
        {
            query[i] = 0;
        }
    }


    if(arr[0] == 1 && arr[n-1] == 1)
    {
        a = 1;
    }

    for(i=1;i<(num+2);i++)
    {
        if((posn[i]-posn[i-1]-1)>max) // length between two zeroes = posn[i] - posn[i-1] - 1
        {
            pre = max;
            spre = smax;
            epre = emax;
            smax = posn[i-1];
            emax = posn[i];
            max = (posn[i]-posn[i-1]-1);
        }
    }

    if(a == 1)
    {
        if( ((n - posn[num]) - 1 + posn[1]) > max )
        {
            b = 1;
            pre = max;
            spre = smax;
            epre = emax;
            smax = posn[num];
            emax = posn[1];
            max = ((n - posn[num]) - 1 + posn[1]);
        }
    }

    c = 0;

    for(l=0;l<q;l++)
    {
        if(query[l] == 1)
        {
            shiftcount++;
        }

        else
        {
            if(((smax+shiftcount)%n) < ((emax+shiftcount)%n)) )
            {
                if(max >= k)
                {
                    ans[c] = k;
                    c++;
                }

                else
                {
                    ans[c] = max;
                    c++;
                }
            }

            else
            {
                if((n - ((smax + shiftcount)%n) - 1) > (emax+shiftcount)%n)
                {
                    if((n - ((smax + shiftcount)%n) - 1) >= pre)
                    {
                        if((n - ((smax + shiftcount)%n) - 1) >= k)
                        {
                            ans[c] = k;
                            c++;
                        }

                        else
                        {
                            ans[c] = (n - ((smax + shiftcount)%n) - 1);
                            c++;
                        }
                    }

                    else
                    {
                        if(pre >= k)
                        {
                            ans[c] = k;
                            c++;
                        }

                        else
                        {
                            ans[c] = pre;
                            c++;
                        }
                    }
                }

                else
                {
                    if((emax+shiftcount)%n >= pre)
                    {
                        if((emax+shiftcount)%n >= k)
                        {
                            ans[c] = k;
                            c++;
                        }

                        else
                        {
                            ans[c] = (emax+shiftcount)%n;
                            c++;
                        }
                    }

                    else
                    {
                        if(pre >= k)
                        {
                            ans[c] = k;
                            c++;
                        }

                        else
                        {
                            ans[c] = pre;
                            c++;
                        }
                    }
                }



            }
        }
    }

    for(i=0;i<c;i++)
    {
        cout<<ans[i]<<endl;
    }

}
