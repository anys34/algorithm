#include <iostream>
#include <vector>

using namespace std;

bool visited[1001];
vector<int> graph[1001];

void dfs(int x) {
  visited[x] = true;

  for (int i = 0; i < graph[x].size(); i++) {
    int y = graph[x][i];
    if (!visited[y]) {
      dfs(y);
    }
  }
}

int main() {
  int n, m, cnt=0;
  cin>>n>>m;

  for (int i = 0; i < m; i++) {
    int a, b;
    cin>>a>>b;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }

  for (int i = 1; i <= n; i++) {
    if (!visited[i]) {
      dfs(i);
      cnt++;
    }
  }
  cout<<cnt;
}