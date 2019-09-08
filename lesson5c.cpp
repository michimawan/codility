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
  int n, k;
  cin >> n;
  while(n--) {
    cin >> k;
    v.push_back(k);
  }

  float minAvg = 999999;
  int startPos = 0;
  for(int i=0; i<v.size(); i++) {
    int localSum = v[i];
    for (int j=i + 1; j<v.size(); j++) {
      // cout << "i: " << i << ", j: " << j << endl;
      // cout << "val i: " << v[i] << ", val j: " << v[j] << endl;
      localSum += v[j];

      float localAvg = (float) localSum / (j - i + 1);
      // cout << "localAvg: " << localAvg << ", startPos: " << i << endl;
      if (minAvg > localAvg) {
        minAvg = localAvg;
        startPos = i;
        // cout << minAvg << ", " << i << endl;
      }
    }
  }

  cout << startPos << endl;

  return 0;
}
