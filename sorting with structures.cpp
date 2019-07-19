#include<bits/stdc++.h>
using namespace std;

struct student
{
    int roll, marks;
};

bool comp(student , student);

main()
{
    struct student s[4];
    int i;

    s[0].roll = 0;
    s[0].marks = 0;
    s[1].roll = 8;
    s[2].roll = 6;
    s[3].roll = 6;
    s[1].marks = 3;
    s[2].marks = 8;
    s[3].marks = 1;

    sort(s, s+4, comp);

    for(i=0;i<4;i++)
    {
        cout<<s[i].roll<<" "<<s[i].marks<<endl;
    }
}

bool comp(student a, student b)
{
    if(a.roll == b.roll)
    {
        if(a.marks < b.marks)
        {
            return true;
        }

        return false;
    }

    if(a.roll < b.roll)
    {
        return true;
    }

    return false;

   // return ((a.roll<b.roll)?(true):((a.roll == b.roll)?((a.marks<b.marks)?true:false):false));
}
