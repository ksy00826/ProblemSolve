#include <iostream>
#include <cmath>
using namespace std;

int main2071() {
	int T, i = 1;

	cin >> T;
	while (T-- > 0) {
		float sum = 0;
		int num;
		for (int i = 0; i < 10; i++) {
			cin >> num;
			sum += num;
		}
		cout << "#" << i << " " << round(sum / 10) << endl;
		i++;
	}
	return 0;
}