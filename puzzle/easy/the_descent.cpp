#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

struct mountain {
    int h, id;
};

bool cmp(mountain x, mountain y) {
    return x.h > y.h;
}

int main()
{

    // game loop
    while (1) {
        mountain m[10];
        for (int i = 0; i < 8; i++) {
            cin >> m[i].h; cin.ignore();
            m[i].id = i;
        }

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;
        sort(m, m + 8, cmp);
        cout << m[0].id << endl;
        //cout << "4" << endl; // The number of the mountain to fire on.
    }
}
