#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,a;
    string s;

    getline(cin,s);
    n = s.length();
    map<lli, lli> m;
    vector<pair<lli,char>> v;

    string t;

    t+='(';
    t+='B';
    t+=' ';
    t+='$';
    t+='E';
    t+='F';
    t+='G';
    t+=')';
    t+='I';
    t+='J';
    t+='.';
    t+='/';
    t+='<';
    t+='-';
    t+='\\';
    t+='P';
    t+='Q';
    t+='R';
    t+='?';
    t+='T';
    t+='^';
    t+='|';
    t+='_';
    t+='>';
    t+='Y';
    t+='Z';


    for(i=0;i<n;i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            s[i] = char(int(s[i])-32);
        }
        if(s[i] != ' ')
        {
            m[int(s[i])-int('A')]++;
        }
    }
    cout<<endl;
    for(i=0;i<26;i++)
    {
        cout<<char(65+i)<<" -> "<<m[i]<<" -> "<<t[25-i]<<endl;
        v.pb({m[i],char(65+i)});
    }

    sort(v.begin(),v.end());
    cout<<endl<<endl;
    for(auto it: v)
    {
        cout<<it.f<<" "<<it.sec<<" and ASCII is "<<int(it.sec)-65<<endl;
    }

}

// Remember, remember the Fifth of November, The Gunpowder Treason and Plot, I know of no reason Why the Gunpowder Treason Should ever be forgot.Guy Fawkes, Guy Fawkes, t'was his intent To blow up the Queen and Parli'ment. Three-score barrels of powder below, Poor old England to overthrow; By God's providence he was catch'd (or by God's mercy*) With a dark lantern and burning match. Holla boys, Holla boys, let the bells ring. Holloa boys, holloa boys, God save the Queen! And what should we do with him? Burn him!

// Guy Fawkes, Guy Fawkes, 'twas his intent To blow up the King and the Parliament Three score barrels of powder below Poor old England to overthrow By God's providence he was catch'd With a dark lantern and burning match Holler boys, holler boys, let the bells ring Holler boys, holler boys, God save the King!


//A few of the conspirators were concerned about fellow Catholics who would be present at Parliament during the opening.[32] On the evening of 26 October, Lord Monteagle received an anonymous letter warning him to stay away, and to "retyre youre self into yowre contee whence yow maye expect the event in safti for ... they shall receyve a terrible blowe this parleament".[33] Despite quickly becoming aware of the letter – informed by one of Monteagle's servants – the conspirators resolved to continue with their plans, as it appeared that it "was clearly thought to be a hoax".[34] Fawkes checked the undercroft on 30 October, and reported that nothing had been disturbed.[35] Monteagle's suspicions had been aroused, however, and the letter was shown to King James. The King ordered Sir Thomas Knyvet to conduct a search of the cellars underneath Parliament, which he did in the early hours of 5 November. Fawkes had taken up his station late on the previous night, armed with a slow match and a watch given to him by Percy "becaus he should knowe howe the time went away".[3] He was found leaving the cellar, shortly after midnight, and arrested. Inside, the barrels of gunpowder were discovered hidden under piles of firewood and coal.
