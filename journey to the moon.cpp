
#include <bits/stdc++.h>

using namespace std;

#define pb push_back

vector<string> split_string(string);
int visited[100002],visitCount=0,countryCount=0;
map<int, int> m;
vector<int> graph[100002];

void dfs(int cur,int id)
{
    int n,i,node,a;

    visited[cur] = 1;
    visitCount++;
    m[id]++;

    for(auto node: graph[cur])
    {
        if(visited[node] == 0)
        {
            dfs(node,id);
        }
    }

    return;
}

// Complete the journeyToMoon function below.
int journeyToMoon(int n, vector<vector<int>> astronauts) {

    int a,b,c,id,i,j;
    long long int ret=0,sum[100002] = {0};

    for(auto it: astronauts)
    {
        a = it[0];
        b = it[1];
        graph[a].pb(b);
        graph[b].pb(a);
    }

    id = 0;
    i = 0;
    while(visitCount != n && i<n)
    {
        if(visited[i] == 0)
        {
            countryCount++;
            dfs(i,id);
            id++;
            //members.pb(country[id].size());
        }
        i++;
    }
    sum[0] = m[0];
    for(i=1;i<countryCount;i++)
    {
        sum[i] += sum[i-1] + m[i];
    }
    for(i=0;i<countryCount;i++)
    {
        ret += m[i] * (sum[countryCount - 1] - sum[i]);
    }

    return ret;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string np_temp;
    getline(cin, np_temp);

    vector<string> np = split_string(np_temp);

    int n = stoi(np[0]);

    int p = stoi(np[1]);

    vector<vector<int>> astronaut(p);
    for (int i = 0; i < p; i++) {
        astronaut[i].resize(2);

        for (int j = 0; j < 2; j++) {
            cin >> astronaut[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = journeyToMoon(n, astronaut);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
