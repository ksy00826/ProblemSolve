#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int pan[10][10];
vector<int> trueLine{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };

void inputPan() {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> pan[i][j];
		}
	}
}
bool scanPan() {
	//가로
	for (int i = 0; i < 9; i++) {
		vector<int> line;
		for (int j = 0; j < 9; j++) line.push_back(pan[i][j]);
		sort(line.begin(), line.end());
		if (line != trueLine) return false;
	}
	//세로
	for (int i = 0; i < 9; i++) {
		vector<int> line;
		for (int j = 0; j < 9; j++) line.push_back(pan[j][i]);
		sort(line.begin(), line.end());
		if (line != trueLine) return false;
	}
	//네모
	for (int i = 0; i < 9; i += 3) {
		for (int j = 0; j < 9; j += 3) {
			vector<int>line;
			for (int k = i; k < i + 3; k++) {
				for (int m = j; m < j + 3; m++)
					line.push_back(pan[k][m]);
			}
			sort(line.begin(), line.end());
			if (line != trueLine) return false;
		}
	}
	return true;
}

int main() {
	int T, i = 1;

	cin >> T;
	while (T-- > 0) {
		inputPan();
		cout << "#" << i << " " << scanPan() << endl;

		i++;
	}
}