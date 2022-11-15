#include <iostream>
#include <algorithm>
using namespace std;

void dump(int height[]) {
	auto maxIt = max_element(height, height + 100);
	auto minIt = min_element(height, height + 100);
	(*maxIt)--;
	(*minIt)++;
}

int main1208() {
	int i = 0, dumpCnt;
	int height[101] = { 0 };

	while (i < 10) {
		cin >> dumpCnt;
		for (int i = 0; i < 100; i++) {
			cin >> height[i];
		}
		while (dumpCnt-- > 0) {
			dump(height);
		}
		auto maxIt = max_element(height, height + 100);
		auto minIt = min_element(height, height + 100);

		cout << "#" << i + 1 << " " << *maxIt - *minIt << endl;
		i++;
	}
	return 0;
}