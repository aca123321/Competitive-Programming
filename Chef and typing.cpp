#include<iostream>
#include<string>
using namespace std;

main()
{
    int t,n,i,j,sum,*time,flag,temp;
    string *str;

    cin>>t;

    while(t--)
    {
        sum = 0;
        cin>>n;

        str = new string[n];
        time = new int[n];

        for(i=0;i<n;i++) //for each string
        {
            cin>>str[i];
            flag = 0;
            time[i] = 0;
            temp = 0;

            for(j=0;j<i;j++)
            {
                if((str[j].compare(str[i]) == 0)&&(str[j].length() == str[i].length()))
                {
                    flag++;
                    temp = j;
                    sum += time[temp]/2;
                    time[i] = time[temp]/2;
                    break;
                }
            }

            if(flag == 0) //new string
            {
                sum += 2;
                time[i] += 2;

                for(j=1;j<str[i].length();j++)
                {
                    if(str[i][j-1] == 'd' || str[i][j-1] == 'f') //previous character was typed using left hand
                    {
                        if(str[i][j] == 'd' || str[i][j] == 'f')//same hand
                        {
                            sum += 4;
                            time[i] += 4;
                        }

                        else //different hand
                        {
                            sum += 2;
                            time[i] += 2;
                        }
                    }

                    else //previous character was typed using right hand
                    {
                        if(str[i][j] == 'd' || str[i][j] == 'f')//different hand
                        {
                            sum += 2;
                            time[i] += 2;
                        }

                        else //same hand
                        {
                            sum += 4;
                            time[i] += 4;
                        }

                    }
                }
            }

        }

        cout<<sum<<endl;
    }
}
