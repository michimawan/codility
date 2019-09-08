#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main() {
  int n, input;
  vector<int> v;

  cin >> n;

  while(n--) {
    cin >> input;
    v.push_back(input);
  }

  set<int> s;
  for(int i=0; i<v.size(); i++) {
    s.insert(v[i]);
  }

  cout << s.size() << endl;

  return 0;
}
