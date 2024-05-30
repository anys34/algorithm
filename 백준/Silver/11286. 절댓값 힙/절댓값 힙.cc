#include <iostream>
#include <queue>
#include <functional>

using namespace std;

struct cmp {
    bool operator()(int a, int b){
      if(abs(a) == abs(b))
        return a > b;
      return abs(a) > abs(b);
    }
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, a;
  cin>>n;
  priority_queue<int, vector<int>, cmp> pq;

  while (n--) {
    cin>>a;
    if (a == 0) {
      if (pq.empty()) {
        cout<<"0\n";
      } else {
        cout<<pq.top()<<'\n';
        pq.pop();
      }
    } else {
      pq.push(a);
    }
  }
  return 0;
}