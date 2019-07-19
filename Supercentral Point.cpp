        #include<bits/stdc++.h>
        using namespace std;

        main()
        {
            int n,i,x,y,count=0;

            cin>>n;
            int arr[n][2];
            int row[2002][2] = {2001,-1};
            int col[2002][2] = {2001,-1};

            for(i=0;i<2002;i++)
            {
                row[i][0] = 2001;
                row[i][1] = -1;
                col[i][0] = 2001;
                col[i][1] = -1;
            }

            for(i=0;i<n;i++)
            {
                cin>>x>>y;

                x += 1000;
                y += 1000;

                arr[i][0] = x;
                arr[i][1] = y;

                if(x>row[y][1])
                {
                    row[y][1] = x;
                }
                if(x<row[y][0])
                {
                    row[y][0] = x;
                }

                if(y>col[x][1])
                {
                    col[x][1] = y;
                }
                if(y<col[x][0])
                {
                    col[x][0] = y;
                }
            }

            for(i=0;i<n;i++)
            {
                if( (arr[i][0]>row[arr[i][1]][0]) && (arr[i][0]<row[arr[i][1]][1]) && (arr[i][1]>col[arr[i][0]][0]) && (arr[i][1]<col[arr[i][0]][1]) )
                {
                    count++;
                }
            }

            cout<<count;
        }
