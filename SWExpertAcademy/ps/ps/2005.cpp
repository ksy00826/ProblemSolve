#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> triangle;

void makeTriangle(int n) {
	vector<int> curLine, preLine;

	curLine.push_back(1);
	preLine = curLine;
	triangle.push_back(preLine);
	curLine.clear();
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i + 1 ; j++) {
			int left, right;
			if ((j - 1) < 0) left = 0;
			else left = preLine[j - 1];
			if ((j >= i)) right = 0;
			else right = preLine[j];

			curLine.push_back(left + right);
		}
		preLine = curLine;
		triangle.push_back(preLine);
		curLine.clear();
	}
}

void printTriangle() {
	for (auto line : triangle) {
		for (auto n : line) {
			cout << n << " ";
		}
		cout << endl;
	}
}

int main2005() {
	int T, i = 1;
	int n;
	cin >> T;
	while (T-- > 0) {
		cin >> n;
		makeTriangle(n);
		cout << "#" << i << endl;
		printTriangle();
		triangle.clear();
		i++;
	}
	return 0;
}