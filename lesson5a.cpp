#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<int> v;
  int n, k;
  cin >> n;
  while(n--) {
    cin >> k;
    v.push_back(k);
  }

  long long left = 0;
  long long right = 0;
  long long cars = 0;
  long long pairs = 0;
  for(int i=0; i<v.size(); i++) {
    if (v[i] == 0) {
      right++;

      cars++;
    } else {
      left++;

      pairs += cars;
    }
  }

  if (right == 0 || left == 0) {
    cout << 0 << endl;
    return 0;
  }

  if (pairs > 1000000000) {
    cout << -1 << endl;
    return -1;
  }

  cout << pairs << endl;

  return 0;
}
