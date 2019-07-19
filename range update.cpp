    #include<iostream>
    using namespace std;

    main()
    {
        int t,n,u,q,l,r,val,i,query;
        cin>>t;

        while(t--)
        {
            cin>>n>>u;
            int arr[n+1]={0};

            for(i=0;i<u;i++)
            {
                cin>>l>>r>>val;
                arr[l] += val;
                arr[r+1] -= val;
            }

    		cout<<arr[0]<<endl;

            for(i=1;i>n;i++)
            {
                arr[i] += arr[i-1];
                cout<<arr[i];
            }

            cin>>q;

            for(i=0;i<q;i++)
            {
                cin>>query;
                cout<<arr[query]<<endl;
            }
        }
    }
