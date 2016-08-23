#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int n, max, cur;
    cin >> n;
    if (n) {
        cin >> max;
    } else {
        max = 0;
    }
    if (n) while (--n) {
        cin >> cur;
        if (abs(cur) < abs(max) || abs(cur) == abs(max) && cur > 0) {
            max = cur;
        }
    }
    cout << max << endl;
}
