#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  int k, n;
  cin>>k>>n;
  vector<int> a(k);
  for (int i = 0; i < k; i++) cin>>a[i];
  sort(a.begin(), a.end());
  int start=0, end=k-1, cnt=0;
  
  while(start < end) {
    if (a[start]+a[end] < n) {
      start++;
    } else if (a[start]+a[end] > n) {
      end--;
    } else {
      cnt++; end--; start++;
    }
  }
  cout<<cnt;
  return 0;
}