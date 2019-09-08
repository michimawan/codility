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

int main()
{
    vector<int> v;
    int x, n, k;
    cin >> x >> n;
    while(n--) {
        cin >> k;
        v.push_back(k);
    }

    int maxCounter = 0;
    vector<int> result = vector<int>(x, 0);

    for (int i=0; i<v.size(); i++) {
      if (1 <= v[i] && v[i] <= x) {
        result[v[i] - 1]++;
        if (maxCounter < result[v[i] - 1]) {
          maxCounter = result[v[i] - 1];
        }
      } else if (v[i] == x + 1) {
        fill(result.begin(), result.end(), maxCounter);
      }
    }

    printVector(result);

    return 0;
}
