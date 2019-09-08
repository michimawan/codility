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
  vector<int> v;
  int a, b, k;
  cin >> a >> b >> k;

  int divisableByK = 0;
  for(int i=a; i<=b; ) {
    if (i % k == 0) {
      divisableByK++;
      i+=k;
      continue;
    }
    i++;
  }

  cout << divisableByK << endl;

  return 0;
}
