#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    int x, y, d;
    cin >> x >> y >> d;

    int currentDistance = ((y - x) / d) * d;

    if ((currentDistance + x) >= y) {
        cout << (y - x) / d << endl;
        // return (y - x) / d;
    } else {
        cout << (y - x) / d + 1 << endl;
        // return (y - x) / d + 1;
    }
    return 0;
}