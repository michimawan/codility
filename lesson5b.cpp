#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

void printVector(vector<int> v) {
  for (int i = 0; i < v.size(); ++i) {
    cout << v[i];
  }

  cout << endl;
}

int main() {

  string s;
  cin >> s;

  vector<int> p, q, result;
  int n, m, k;
  cin >> n;
  m = n;
  while(n--) {
    cin >> k;
    cout << k << endl;
    p.push_back(k);
  }
  while(m--) {
    cin >> k;
    cout << k << endl;
    q.push_back(k);
  }

  for(int i=0; i<p.size(); i++) {
    int minImpactFactor = 999999;

    for(int j=p[i]; j<=q[i]; j++) {
      int impact;
      if (s[j] == 'A') {
        impact = 1;
      } else if (s[j] == 'C') {
        impact = 2;
      } else if (s[j] == 'G') {
        impact = 3;
      } else {
        impact = 4;
      }
      if (minImpactFactor > impact) {
        minImpactFactor = impact;
      }
    }
    result.push_back(minImpactFactor);
  }

  printVector(result);
  // return result;

  return 0;
}
