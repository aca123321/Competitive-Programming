#include<bits/stdc++.h>

using namespace std;

#define lli long long int

lli colour(lli , lli);
lli whites(lli,lli,lli,lli);
lli area(lli,lli,lli,lli);


main()
{
    lli t,n,m,a,b,c,d,a2,b2,c2,d2,length,ow,ob,breadth,white,black,oarea;

    cin>>t;

    while(t--)
    {
        cin>>n>>m;

        white = whites(1,1,m,n);
        black = (n*m) - white;

        cin>>a>>b>>c>>d;
        cin>>a2>>b2>>c2>>d2;

        // first spill - whitej
        white += area(a,b,c,d) - whites(a,b,c,d);
        black -= area(a,b,c,d) - whites(a,b,c,d);




        // second spill - black

        if(! ( (a2>c) || (b2>d) ) || ( (a>c2) || (b>d2) ) )
        {
            if()


        }

  /*
        if((a2 >= a && a2 <= c) && (b2 >= b && b2 <= d)) // case 1 int
        {
            if((c2 <= c) && (d2 <= d))
            {
                oarea = area(a2,b2,c2,d2);

                white -= oarea;
                black += oarea;
            }

            else
            {
                oarea = area(a2,b2,c,d);

                ow = whites(a2,b2,c,d);

                black += whites(a2,b2,c2,d2) - ow + oarea;
                white -= whites(a2,b2,c2,d2) - ow + oarea;
            }
        }



        else if((c2 >= a  &&  c2 <= c) && (d2 >= b && d2 <= d)) // case 2 int
        {
            if((a2 >= a ) && (b2 >= b))
            {
                oarea = area(a2,b2,c2,d2);
                white -= oarea;
                black += oarea;
            }

            else
            {
                oarea = area(a,b,c2,d2);

                ow = whites(a,b,c2,d2);

                black += whites(a2,b2,c2,d2) - ow + oarea;
                white -= whites(a2,b2,c2,d2) - ow + oarea;

            }

        }
*/

        else  // no intersection
        {
            a = a2; b = b2; c = c2; d = d2;

            length = (c - a + 1);
            breadth = (d - b + 1);

            if(colour(a,b) == 1) // a,b -> white
            {
                if(((length%2) == 0) || ((breadth%2)==0)) // even division of cells in the spilled area
                {
                    white -= ((length*breadth)/2);
                    black += ((length*breadth)/2);
                }

                else // white was one more than black
                {
                    white -= ((length*breadth)+1/2);
                    black += ((length*breadth)+1/2);
                }
            }




            else // a,b -> black
            {
                if(((length%2) == 0) || ((breadth%2)==0)) // even division of cells in the spilled area
                {
                    white -= ((length*breadth)/2);
                    black += ((length*breadth)/2);
                }

                else // black was one more than white
                {
                    white -= ((length*breadth)-1/2);
                    black += ((length*breadth)-1/2);
                }

            }

        }

        cout<<white<<" "<<black<<endl;

    }
}

lli colour(lli a, lli b)
{
    if((a+b)%2 == 0)
    {
        return 1;
    }

    return 0;
}

lli area(lli a,lli b,lli c,lli d)
{
    return((c-a+1)*(d-b+1));
}

lli whites(lli a,lli b,lli c,lli d)
{
    lli l,br;

    l = (c - a + 1);
    br = (d - b + 1);

    if((colour(a,b)) == 1)
    {
        if(l%2 == 0 || br%2 == 0)
        {
            return ((l*br)/2);
        }

        else
        {
            return (((l*br)+1)/2);
        }
    }

    else
    {
        if(l%2 == 0 || br%2 == 0)
        {
            return ((l*br)/2);
        }

        else
        {
            return (((l*br)-1)/2);
        }
    }


}
