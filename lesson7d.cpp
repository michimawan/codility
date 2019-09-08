#include <iostream>
#include <set>
#include <queue>
#include <vector>

using namespace std;

int main() {
  vector<int> h;
  int n,  k;
  cin >> n;
  while(n--) {
    cin >> k;
    h.push_back(k);
  }

  int numOfBlocks = 0;
  if (h.size() == 1) {
    cout << 1 << endl;
    return 1;
  }
  if (h.size() == 2) {
    if (h[0] == h[1]) {
      cout << 1 << endl;
      return 1;
    }
    cout << 2 << endl;
    return 2;
  }

  // priority_queue<int, vector<int>, greater<int> > minPQ;
  numOfBlocks += 2;
  set<int> s;
  for(int i=1; i<h.size() - 1; i++) {
    // minPQ.push(h[i]);
    s.insert(h[i]);
  }

  cout << numOfBlocks + s.size() << endl;

  return 0;
}
