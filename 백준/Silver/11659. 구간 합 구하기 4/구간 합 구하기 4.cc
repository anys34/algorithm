#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, m, a;
  cin>>n>>m;
  vector<int> sum(n, 0);

  for (int i = 1; i <= n; i++) {
    cin>>a;
    sum[i] = sum[i-1] + a;
  }

  for (int x = 0; x < m; x++) {
    int i, j;
    cin>>i>>j;
    cout<<sum[j]-sum[i-1]<<'\n';
  }
}