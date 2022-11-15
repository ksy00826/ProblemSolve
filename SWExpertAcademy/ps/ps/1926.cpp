#include <iostream>
using namespace std;

int getCntOne(int N) {
	if (N == 3 || N == 6 || N == 9) return 1;
	else return 0;
}

int getCnt(int N) {
	int num4 = N / 1000;
	int num3 = (N % 1000) / 100;
	int num2 = (N % 100) / 10;
	int num1 = (N % 10);
	return getCntOne(num4) + getCntOne(num3) + getCntOne(num2) + getCntOne(num1);
}

int main1926() {
	int N, cnt;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cnt = getCnt(i);
		if (cnt == 0) cout << i << " ";
		else {
			while (cnt-- > 0) cout << "-";
			cout << " ";
		}
	}
	return 0;
}