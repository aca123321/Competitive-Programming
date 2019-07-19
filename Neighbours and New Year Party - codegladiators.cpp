    #include<bits/stdc++.h>
    using namespace std;

    #define lli long long int
    #define pb push_back

    main()
    {
        lli n,i,t;
        lli arr[10002],dp[10002],pre[10002],strong[10002],maxi,ind,prev,pre1,pre2;
        cin>>t;

        while(t--)
        {
            cin>>n;
            maxi=INT_MIN;
            ind = 0;

            for(i=0;i<n;i++)
            {
                cin>>arr[i];
                dp[i] = 0;
                pre[i] = -1;
                strong[i] = -1;
            }

            if(arr[0]>0)
            {
                dp[0] = arr[0];
                strong[0] = 0;
            }

            if(arr[1] > 0)
            {
                dp[1] = arr[1];
                strong[1] = 1;
            }

            dp[2] = max(dp[0],dp[0]+arr[2]);
            if(arr[2]>0)
            {
                strong[2] = 2;
                if(arr[0]>0)
                {
                    pre[2] = 0;
                }
            }
            else
            {
                strong[2] = 0;
            }

            for(i=3;i<n;i++)
            {
                dp[i] = max(dp[i-3],dp[i-3]+arr[i]);
                dp[i] = max(dp[i],dp[i-2]+arr[i]);
                dp[i] = max(dp[i],dp[i-2]);

                if(arr[i]>0)
                {
                    if(dp[i-3]>=dp[i-2])
                    {
                        pre[i] = strong[i-3];
                    }
                    else
                    {
                        pre[i] = strong[i-2];
                    }
                    strong[i] = i;
                }

                else
                {
                    if(dp[i-3]>=dp[i-2])
                    {
                        if(dp[i-3]>=dp[i-1])
                        {
                            strong[i] = strong[i-3];
                        }
                        else
                        {
                            strong[i] = strong[i-1];
                        }
                    }

                    else
                    {
                        if(dp[i-2]>=dp[i-1])
                        {
                            strong[i] = strong[i-2];
                        }
                        else
                        {
                            strong[i] = strong[i-1];
                        }
                        pre[i] = strong[i];
                    }
                }
            }


            for(i=0;i<n;i++)
            {
                if(dp[i]>maxi)
                {
                    maxi = dp[i];
                    ind = i;
                }
            }

            prev = ind;

            while(prev>=0)
            {
                cout<<arr[prev];
                prev = pre[prev];
            }
            cout<<endl;
        }
    }
