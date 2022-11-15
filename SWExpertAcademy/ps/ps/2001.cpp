#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> MMpan;

void inputData(vector<vector<int>>& pan, int N) {
	for (int i = 0; i < N; i++) {
		vector<int> line;
		for (int j = 0; j < N; j++) {
			int n;
			cin >> n;
			line.push_back(n);
		}
		pan.push_back(line);
	}
}

int calculateMM(vector<vector<int>> pan, int M) {
	int best = 0;
	for (int i = 0; i < pan.size(); i++) {
		if (i + M > pan.size()) continue;
		for (int j = 0; j < pan[0].size(); j++) {
			if (j + M > pan.size()) continue;
			//(i, j) ÁÂÇ¥
			int sum = 0;
			for (int k = i; k < i + M; k++) {
				for (int m = j; m < j + M; m++) {
					sum += pan[k][m];
				}
			}

			if (best < sum) best = sum;
		}
	}
	return best;
}

int main2001() {
	int T, i = 1;
	int N, M;
	vector<vector<int>> pan;

	cin >> T;
	while (T-- > 0) {
		cin >> N >> M;
		inputData(pan, N);
		cout << "#" << i << " " << calculateMM(pan, M) << endl;

		i++;
		pan.clear();
	}
	return 0;
}