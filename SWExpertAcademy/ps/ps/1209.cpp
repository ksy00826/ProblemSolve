#include <iostream>
#include <algorithm>
using namespace std;

int arr[101][101];

void getArr() {
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			cin >> arr[i][j];
		}
	}
}

int calHorison() {
	int maxVal = 0;
	for (int i = 0; i < 100; i++) {
		int sum = 0;
		for (int j = 0; j < 100; j++) {
			sum += arr[i][j];
		}
		if (maxVal < sum) maxVal = sum;
	}
	return maxVal;
}

int calVertic() {
	int maxVal = 0;
	for (int i = 0; i < 100; i++) {
		int sum = 0;
		for (int j = 0; j < 100; j++) {
			sum += arr[j][i];			//이것만 다름 i, j 바꿈
		}
		if (maxVal < sum) maxVal = sum;
	}
	return maxVal;
}

int calDiagonal() {
	int sum = 0, maxVal = 0;
	for (int i = 0; i < 100; i++) {
		maxVal += arr[i][i];
	}
	int i = 0;
	for (int j = 99; j >= 0; j--) {
		sum += arr[i][j];
		i++;
	}
	return max(maxVal, sum);
}

int main1209() {
	int T = 10, i;

	while (T-- > 0) {
		cin >> i;
		
		getArr();
		int maxVal = max({ calHorison(), calVertic(), calDiagonal() });
		cout << "#" << i << " " << maxVal << endl;
	}
	return 0;
}