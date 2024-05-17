#include <iostream>

using namespace std;

int main() {
  int n, start=1, end=1, sum=1, cnt=1;
  cin>>n;

  while (end != n) {
    if (sum < n) {
      end++;
      sum += end;
    } else if (sum > n) {
      sum -= start;
      start++;
    } else {
      cnt++; end++;
      sum += end;
    }
  }
  cout<<cnt;
  return 0;
}