//���ذ�
#include <iostream>
using namespace std;

int nums[11][11] = { 0 }; //���� 0���� �ʱ�ȭ

void fillNums(int n) {
	int x = 0, y = n - 1; //1�� �� ��ġ
	for (int i = 0; i < n*n; i++) {
		nums[x][y] = i;

	}
}

int main1954() {
	int T, i = 1;
	int N;


	cin >> T;
	while (T-- > 0) {
		cin >> N;
		fillNums(N);


		i++;
	}
	return 0;
}