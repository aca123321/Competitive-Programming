    #include<bits/stdc++.h>
    using namespace std;

    #define lli long long int

    main()
    {
        lli n,i,count = 0,arr[5]={0},a=0;

        string s,t = "[::]";

        cin>>s;
        n = s.length();

        arr[0] = -1;
        arr[1] = INT_MAX;
        arr[4] = INT_MIN;

        lli j = 1;

        for(i=0;i<n;i++)
        {
            if(s[i] == '[')
            {
                arr[1] = i;
                count++;
                break;
            }
        }

        for(i=0;i<n;i++)
        {
            if(s[i] == ':' && i > arr[1])
            {
                arr[2] = i;
                count++;
                break;
            }
        }

        for(i=n-1;i>=0;i--)
        {
            if(s[i] == ']' && i > arr[2])
            {
                arr[4] = i;
                count++;
                break;
            }
        }

        for(i=n-1;i>=0;i--)
        {
            if(s[i] == ':' && i<arr[4] && i>arr[2])
            {
                arr[3] = i;
                count++;
                break;
            }
        }


        if(count == 4)
        {
            for(i=arr[2]+1;i<arr[3];i++)
            {
                if(s[i] == '|')
                {
                    count++;
                }
            }

            cout<<count;
        }

        else
        {
            cout<<-1;
        }

    }
