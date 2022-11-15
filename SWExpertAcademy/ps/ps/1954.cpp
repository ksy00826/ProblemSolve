//미해결
#include <iostream>
using namespace std;

int nums[11][11] = { 0 }; //전부 0으로 초기화

void fillNums(int n) {
	int x = 0, y = n - 1; //1이 들어갈 위치
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