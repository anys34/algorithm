#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, a, num=1;
  cin >> n;
  vector<char> o;
  stack<int> st;
  for (int i = 0; i < n; i++) {
    cin>>a;
    if (!st.empty() && st.top() == a) {
      st.pop();
      o.push_back('-');
    }
    else if (num <= a) {
      while (num <= a) {
        st.push(num++);
        o.push_back('+');
      }
      st.pop();
      o.push_back('-');
    }
    else {
      cout<<"NO";
      return 0;
    }
  }

  for (auto x : o) {
    cout << x << "\n";
  }
}