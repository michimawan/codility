#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <stdlib.h>

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

    set<int> s;
    pair<set<int>::iterator, bool> it;

    int maxElement = 0;

    for(int i=0; i<v.size(); i++) {
      maxElement = max(maxElement, v[i]);
      it = s.insert(v[i]);
      if (it.second == false) {
        cout << 0 << endl;
      }
    }

    if (maxElement == v.size()) {
      cout << 1 << endl;
    } else {
      cout << 0 << endl;
    }

    return 0;
}
