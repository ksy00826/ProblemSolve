#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void inputVector(vector<int>& height, int N) {
	int h;
	while (N-- > 0) {
		cin >> h;
		height.push_back(h);
	}
}

int scanVector(const vector<int>& height) {
	int res = 0;
	for (int i = 2; i < height.size() - 2; i++) {
		int getMax = max({ height[i - 2], height[i - 1], height[i + 1], height[i + 2] });
		if (getMax >= height[i]) continue;
		res += height[i] - getMax;
	}
	return res;
}

int main1206() {
	int test = 10;
	int N, i = 1;
	vector<int> height;

	while (test-- > 0) {
		cin >> N;
		inputVector(height, N);
		cout << "#" << i << " " << scanVector(height) << endl;
		i++;
		height.clear(); //±î¸ÔÀ½ ..!!!!
	}
	return 0;
}