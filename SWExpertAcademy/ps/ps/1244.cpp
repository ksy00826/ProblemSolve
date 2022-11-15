//해결못함
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<char> str2Vec(string str) { //검색함
	vector<char> v(str.begin(), str.end());
	return v;
}

void printVec(vector<char> vec) {
	for (auto c : vec) cout << c << " ";
	cout << endl;
}

void toArray(int nums[], int num) {
	nums[6] = num / 100000;
	nums[5] = (num % 100000) / 10000;
	nums[4] = (num % 10000) / 1000;
	nums[3] = (num % 1000) / 100;
	nums[2] = (num % 100) / 10;
	nums[1] = (num % 10);
}

void findSwap(int nums[], int cnt, int i) {
	cout << "i: " << i << endl;
	cout << "cnt: " << cnt << endl;

	if (cnt == 0) return;

	int first = nums[i];
	int maxIdx = max_element(nums, nums + i) - nums;
	cout << "maxIdx: " << maxIdx << "  maxVal: " << nums[maxIdx] << endl;
	if (first > nums[maxIdx]) {
		//그대로
		return findSwap(nums, cnt, i - 1);
	}
	else {
		//swap
		nums[i] = nums[maxIdx];
		nums[maxIdx] = first;
		return findSwap(nums, cnt - 1, i - 1);
	}
}

int main1244() {
	int T, i = 1;
	int num;
	int cnt;
	int nums[7];
	cin >> T;
	while (T-- > 0) {
		cin >> num >> cnt;
		toArray(nums, num);
		//print
		for (int i = 6; i > 0; i--) {
			cout << i << ": " << nums[i] << endl;
		}
		int index;
		for (int i = 6; i > 0; i--) {
			if (nums[i] != 0) {
				index = i;
				break;
			}
		}
		findSwap(nums, cnt, index);

		cout << "#" << i << " ";
		for (int i = index; i > 0; i--) cout << nums[i];
		cout << endl;
		i++;
	}

	return 0;
}
