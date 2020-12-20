#pragma GCC target("popcnt")
#include "bits/stdc++.h"
#define f first
#define sc second
#define pb push_back
#define MOD 1000000007L
#define inf 0x3f3f3f3f
typedef long long int ll;
typedef std::vector<int> vi;
typedef std::pair<int, int> pii;
using namespace std;

int a[200005], b[200005], indeg[200005];
ll tsum[200005];
bool visited[200005];

int main(){
    int N;
    cin>>N;
    for(int i = 0;i < N; ++i){
        cin>>a[i];
    }
    for(int i = 0;i < N; ++i){
        cin>>b[i];
        b[i] = b[i] - 1;
    }
    set<int>* adjList = new set<int>[N];
    fill(indeg, indeg + N, 0);
    for(int i = 0;i < N; ++i){
        if(b[i] != -1){
            adjList[i].insert(b[i]);
            indeg[b[i]]++;
        }
    }

    fill(visited, visited + N, false);
    for(int i = 0;i < N; ++i){
        tsum[i] = a[i];
    }
    queue<int> zdeg;
    for(int i = 0;i < N; ++i){
        if(indeg[i] == 0){
            zdeg.push(i);
        }
    }
    vector<int> opbuf;
    set<int> negnodes;
    ll ans = 0;
    while(!zdeg.empty()){
        int cur = zdeg.front();
        zdeg.pop();
        if(tsum[cur] >= 0) visited[cur] = 1;
        if(tsum[cur] >= 0){
            ans += tsum[cur];
            opbuf.pb(cur);
        }
        if(tsum[cur] < 0){
            negnodes.insert(cur);
        }
        for(auto i: adjList[cur]){
            if(tsum[cur] >= 0) tsum[i] += tsum[cur];
            indeg[i]--;
            if(indeg[i] == 0){
                zdeg.push(i);
            }
        }
        ans += tsum[cur];
        opbuf.pb(cur);
    }
    for(auto x: negnodes){
        ans += a[x];
    }
    cout<<ans<<endl;
}
