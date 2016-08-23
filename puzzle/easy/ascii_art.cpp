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
    int L;
    cin >> L; cin.ignore();
    int H;
    cin >> H; cin.ignore();
    string T;
    getline(cin, T);
    for (int i = 0; i < H; i++) {
        string ROW;
        getline(cin, ROW);
        for (auto &&c : T) {
            int d;
            if (c >= 'A' && c <= 'Z') {
                d = c - 'A';
            } else if (c >= 'a' && c <= 'z') {
                d = c - 'a';
            } else {
                d = 26;
            }
            d *= L;
            for (int j = d; j < d + L; j++) {
                cout << ROW[j];
            }
        }
        cout << endl;
    }

    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    //cout << "answer" << endl;
}
