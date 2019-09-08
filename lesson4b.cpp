#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <stdlib.h>

using namespace std;

int main()
{
    vector<int> v;
    int x, n, k;
    cin >> x >> n;
    while(n--) {
        cin >> k;
        v.push_back(k);
    }

    set<int> s;
    int time = -1;

    for(int i=0; i<v.size(); i++) {
      if (v[i] <= x) {
        s.insert(v[i]);
      }
      if (s.size() == x) {
        time = i;
        break;
      }
    }

    cout << time << endl;

    return 0;
}
