    #include<iostream>
    #include<string>
    using namespace std;

    main()
    {
        string x,y;
        int n,i;

        cin>>x;
        cin>>y;

        n = x.length();

        for(i=0;i<n;i++)
        {
            if(x[i] != y[i])
            cout<<"1";

            else
                cout<<"0";
        }
    }
