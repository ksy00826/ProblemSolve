#include <iostream>
using namespace std;

int main2072() {
	int testN, numN, num, sum, index;
	index = 1;

	cin >> testN;
	while (testN-- > 0) {
		sum = 0;
		numN = 10;
		while (numN-- > 0) {
			cin >> num;
			if (num % 2 != 0) sum += num;
		}
		cout << "#" << index << " " << sum << endl;
		index++;
	}
	return 0;
}