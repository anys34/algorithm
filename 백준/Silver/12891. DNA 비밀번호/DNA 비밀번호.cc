#include <iostream>
#include <vector>

using namespace std;
string str;
vector<int> v(4), check(4, 0);

void add(int i) {
  if ('A' == str[i]) check[0]++;
  if ('C' == str[i]) check[1]++;
  if ('G' == str[i]) check[2]++;
  if ('T' == str[i]) check[3]++;
}

void rm(int i) {
  if ('A' == str[i]) check[0]--;
  if ('C' == str[i]) check[1]--;
  if ('G' == str[i]) check[2]--;
  if ('T' == str[i]) check[3]--;
}

int main() {
  int p, s, cnt=0;
  cin>>s>>p;
  cin>>str;
  for (int i = 0; i < 4; i++) cin>>v[i];

  for (int i = 0; i < p; i++) {
    add(i);
  }

  if (check[0] >= v[0] && check[1] >= v[1] && check[2] >= v[2] && check[3] >= v[3]) cnt++;

  for (int i = p; i < s; i++) {
    rm(i-p);
    add(i);
    if (check[0] >= v[0] && check[1] >= v[1] && check[2] >= v[2] && check[3] >= v[3]) cnt++;
  }

  cout<<cnt;
  return 0;
}