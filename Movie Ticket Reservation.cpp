#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

struct screen
{
    lli id, n_rows, seats_per_row,**seats;
    vector<lli> aisle;
};

map<lli, struct screen> theatre;

struct screen cmd_classifier(string cmd)
{
    lli opn,i,id,row_num,n_seats;
    string temp="";
    vector<lli> v;
    struct screen ret;

    if(cmd[0] == 'a')
    {
        opn = 1;
        for(i=17;i<cmd.length();i++)
        {
            temp += cmd[i];
        }

        ret.screen_id = v[0];
        ret.n_rows = v[1];
        ret.seat_per_row = v[2];

        add(&ret,)
    }
    else if(cmd[0] == 'r')
    {
        opn = 2;
        for(i=19;i<cmd.length();i++)
        {
            temp += cmd[i];
        }
        ret.screen_id = v[0];
        row_num = v[1];

    }
    else if(cmd[0] == 'g')
    {
        opn = 3;
        for(i=27;i<cmd.length();i++)
        {
            temp += cmd[i];
        }
        ret.screen_id = v[0];
        row_num = v[1];
    }
    else
    {
        opn = 4;
        for(i=31;i<cmd.length();i++)
        {
            temp += cmd[i];
        }
        ret.screen_id = v[0];
        n_seats = v[1];
        row_num = v[2];
    }

    v = extractInt(temp);

}



vector extractInt(string str)
{
    stringstream obj;
    vector<lli> ans;

    obj << str;

    string temp;
    int found;
    while (!obj.eof())
    {
        obj >> temp;
        if (stringstream(temp) >> found)
        {
            ans.pb(found);
        }
        temp = "";
    }

    return ans;
}

main()
{


}
