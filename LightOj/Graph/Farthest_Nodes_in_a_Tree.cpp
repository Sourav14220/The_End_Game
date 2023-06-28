//The code is not 100% correct
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> //Common file
#include <ext/pb_ds/tree_policy.hpp> //Including tree_order_statistics_node_update
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
typedef tree<ll, null_type,less<ll>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
//cout << *x.find_by_order(1) << endl; //iterator to the k-th largest element
//cout << x.order_of_key(-5) << endl; //number of items in a set that are strictly smaller than our item
clock_t startTime;
double getCurrentTime( ) {
 return (double)(clock( ) - startTime) / CLOCKS_PER_SEC;
}
const ll N = 1e5 + 123;
vector < pair <ll, ll > > Graph[N];
bool vis[N];
//vector <ll> path;
ll dis[N];
ll mx = 0;
void dfs(ll node, ll dist) {
 if(vis[node]) return;
// path.push_back(node);
 vis[node] = 1;
 dis[node] = dist;
 mx = max(mx, dist);
 for(auto [u, w] : Graph[node]) {
  dfs(u, dist + w);
 }
 return;
}
int main( ) {
  startTime = clock( );
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int TC, Case = 1; cin >> TC;
  while( TC-- ) {
    ll n; cin >> n;
    for(int i = 0 ; i < n ; i++) vis[i] = 0;
    memset(dis, 0, sizeof(dis));
    memset(Graph, 0, sizeof(Graph));
    for(int i = 1 ; i <= n - 1 ; i++) {
     ll x, y, w; cin >> x >> y >> w;
     Graph[x].push_back({y, w});
     Graph[y].push_back({x, w});
    }
    dfs(0, 0);
    ll next_node;
    for(int i = 0 ; i < n ; i++) {
     if(dis[i] == mx) {
      next_node = i;
      break;
     }
    }
    for(int i = 0 ; i < n ; i++) vis[i] = 0;
    mx = 0;
    dfs(next_node, 0);
    cout << "Case " << Case++ << ": " << mx << endl;
    memset(dis, 0, sizeof(dis));
    memset(Graph, 0, sizeof(Graph));
  }
  return 0;
}

