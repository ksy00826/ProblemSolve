#include <iostream>
#include <algorithm>
using namespace std;

int main1204() {
	int T, num;
	cin >> T;
	while (T-- > 0) {
		int scores[105] = { 0 };
		int score, stud = 1000;
		cin >> num;
		while (stud-- > 0) {
			cin >> score;
			scores[score]++;
		}
		int index = max_element(scores, scores + 105) - scores;
		for (int i = index; i < 105; i++) {
			if (scores[i] >= scores[index]) {
				index = i;
			}
		}
		cout << "#" << num << " " << index << endl;
	}
	return 0;
}
//ù �õ��� 9/10 ��, �ֺ���� ���� �� �� ������ ���� ū ������ ����϶�). ������