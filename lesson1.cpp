#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    // cout << "100011101101110100011100001" << endl;
    int N = 74901729;
    // expected 4;
    string binary = bitset<32>(N).to_string();
    bool open = false;
    int length = 0;
    int maxLength = 0;
    for (int i = 0; i < binary.length(); i++)
    {
        if (binary[i] == '1') {
            if (open) {
                if (maxLength < length) {
                    maxLength = length;
                }
                length = 0;
            }
            open = true;
        } else if (open) {
            length++;
        }
    }
    cout << maxLength << endl;
    return 0;
}