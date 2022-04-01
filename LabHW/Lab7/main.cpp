#include <iostream>
#include <string>
using namespace std;

const char list[10][3][3] = {
	{{' ','_',' '}, {'|',' ','|'}, {'|','_','|'}},  // 0
	{{' ',' ',' '}, {' ',' ','|'}, {' ',' ','|'}},  // 1
	{{' ','_',' '}, {' ','_','|'}, {'|','_',' '}},  // 2
	{{' ','_',' '}, {' ','_','|'}, {' ','_','|'}},  // 3
	{{' ',' ',' '}, {'|','_','|'}, {' ',' ','|'}},  // 4
	{{' ','_',' '}, {'|','_',' '}, {' ','_','|'}},  // 5
	{{' ','_',' '}, {'|','_',' '}, {'|','_','|'}},  // 6
	{{' ','_',' '}, {' ',' ','|'}, {' ',' ','|'}},  // 7
	{{' ','_',' '}, {'|','_','|'}, {'|','_','|'}},  // 8
	{{' ','_',' '}, {'|','_','|'}, {' ','_','|'}},  // 9
};


bool isNum(char s) {
	if (s >= '0' && s <= '9') {
		return true;
	}
	return false;
}

int main() {
	string input;
	// 1234 NTUST 123
	while (getline(cin, input)) {
		for (int i = 0; i < 3; i++) {
			for (char s : input) {
				if (isNum(s)) {
					for (int j = 0; j < 3; j++) {
						cout << list[s - '0'][i][j];
					}
				}
			}
			cout << endl;
		}
	}
}
