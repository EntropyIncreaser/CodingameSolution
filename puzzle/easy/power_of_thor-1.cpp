#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/
int main()
{
    int lightX; // the X position of the light of power
    int lightY; // the Y position of the light of power
    int initialTX; // Thor's starting X position
    int initialTY; // Thor's starting Y position
    string move;
    cin >> lightX >> lightY >> initialTX >> initialTY; cin.ignore();

    // game loop
    while (1) {
        int remainingTurns; // The remaining amount of turns Thor can move. Do not remove this line.
        cin >> remainingTurns; cin.ignore();

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;
        if (initialTY > lightY) {
            move = "N";
            initialTY--;
        } else if (initialTY == lightY) {
            move = "";
        } else {
            move = "S";
            initialTY++;
        }
        if (initialTX < lightX) {
            move += "E";
            initialTX++;
        } else if (initialTX > lightX) {
            move += "W";
            initialTX--;
        }
        cout << move << endl;

        // A single line providing the move to be made: N NE E SE S SW W or NW
    }
}
