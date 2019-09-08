#include <iostream>
#include <map>
#include <vector>
#include <set>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(9);
    v.push_back(3);
    v.push_back(9);
    v.push_back(7);
    v.push_back(3);

    // Using map
    map<int, int> pair;
    map<int,int>::iterator it;
    for (int i = 0; i < v.size(); i++)
    {
        if (pair[v[i]] == 0) {
            pair[v[i]]++;
        } else {
            pair[v[i]]--;
        }
    }

    for (it=pair.begin(); it!=pair.end(); ++it)
        if (it->second != 0)
            cout << it->first << endl;
            return it->first;
}
