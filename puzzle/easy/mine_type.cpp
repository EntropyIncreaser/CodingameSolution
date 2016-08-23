#include <iostream>
#include <climits>
#include <cstdio>
#include <vector>
#include <map>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int N; // Number of elements which make up the association table.
int Q; // Number Q of file names to be analyzed.
string FNAME; // One file name per line.
string FEXT;
string EXT; // file extension
string MT; // MIME type.
map<string, string> EXT_MTS;
map<string, string> :: iterator it;

int main()
{
	scanf("%d%d", &N, &Q);

	for (int i = 0; i < N; i++) {
		cin >> EXT >> MT; cin.ignore();
		for (int j = 0; j < EXT.size(); j++) {
			EXT[j] = tolower(EXT[j]);
		}
		EXT_MTS.insert(pair<string, string>(EXT, MT));
	}
	for (int i = 0; i < Q; i++) {

		getline(cin, FNAME);
		uint64_t spot = FNAME.find_last_of('.');
		if (spot == ULONG_MAX) {
			printf("UNKNOWN\n");
			continue;
		}
		FEXT = FNAME.substr(spot + 1);
		for (int j = 0; j < FEXT.size(); j++) {
			FEXT[j] = tolower(FEXT[j]);
		}
		it = EXT_MTS.find(FEXT);
		if (it == EXT_MTS.end()) {
			cout << "UNKNOWN" << endl;
		} else {
			cout << EXT_MTS[FEXT] << endl;
		}
	}

	// Write an action using cout. DON'T FORGET THE "<< endl"
	// To debug: cerr << "Debug messages..." << endl;


	// For each of the Q filenames, display on a line the corresponding MIME type. If there is no corresponding type, then display UNKNOWN.
}
