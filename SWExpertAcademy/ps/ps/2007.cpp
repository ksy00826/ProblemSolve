#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int findMadi(string str) {
	char strArr[31];
	str.copy(strArr, 31); //string -> array

	char madi[11];
	int cnt = 1;
	madi[0] = strArr[0];
	for (int i = 1; i < 30; i++) {
		if ((strArr[i] == madi[0]) && (strArr[i + 1] == madi[1])) break;

		madi[cnt] = strArr[i];
		cnt++;

		//문제 조건이 좀 불명확함.
	}
	return cnt;
}

int main2007() {
	int T, i = 1;
	string str;
	cin >> T;
	while (T-- > 0) {
		cin >> str;
		
		cout << "#" << i << " " << findMadi(str) << endl;
		i++;
	}
	return 0;
}