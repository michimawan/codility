#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v;
    int n, k;
    cin >> n;
    while(n--) {
        cin >> k;
        v.push_back(k);
    }

    map<int, int> m;
    int minElement = 1;
    int maxElement = v[0];

    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++) {
      m[v[i]]++;
      if (maxElement < v[i]) {
        maxElement = v[i];
      }
      if (v[i] < 1 || v[i] == minElement) {
        continue;
      }

      // -1 -2 3 -> 1
      //
      // 1 2 4 -> 3
      if (minElement + 1 == v[i]) {
        if (m[minElement] == 0) {
          break;
        }
        minElement++;
      } else if (minElement + 1 < v[i]) {
        if (m[minElement] == 0) {
          break;
        }
        minElement++;
        break;
      }
    }

    if (minElement == maxElement) {
      minElement++;
    }

    cout << minElement << endl;

    return 0;
}
