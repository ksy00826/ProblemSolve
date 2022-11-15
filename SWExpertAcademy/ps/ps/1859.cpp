#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long findMax(const vector<int>& costs) {
	long long total = 0;
	auto beginIter = costs.begin();
	while (true) {
		long long sum = 0;
		auto maxIter = max_element(beginIter, costs.end());
		for (auto it = beginIter; it < maxIter; it++) {
			sum += (*maxIter - *it);
		}
		total += sum;
		beginIter = maxIter + 1;
		if (beginIter == costs.end()) break;
	}
	return total;
}

int main1859() {
	int T, N;
	int cost;
	vector<int> costs;
	int i = 1;

	cin >> T;
	while (T-- > 0) {
		cin >> N;
		while (N-- > 0) {
			cin >> cost;
			costs.push_back(cost);
		}
		cout << "#" << i << " " << findMax(costs) << endl;
		i++;
		costs.clear(); //또 까먹음
	}
	return 0;
}
/*
sol1)
처음에 최댓값 찾아서 앞에꺼 다 더하는 식으로 하려다가
그러면 다음 것들을 어떻게 처리할지 모르겠어서
이전꺼랑 다음꺼 비교해서 현재까지 최대이면 앞에꺼 더하는 식으로 했었음.
근데 이렇게 하면 안됨. 최대 이익이 아님
3/10

sol2)
처음에 생각한 대로 최댓값 찾아서 앞에꺼 다 더하고
그 이후 벡터들 중에서 또 최댓값 찾아서 다 더하고 함
7/10

sol3)
아까 sol1 하다가 맞는거 같은데 안되길래 입력값의 범위를 확인함.
보니까 N * cost 해보면 10000000000 (0이 열개임.
이러면 int 범위 넘ㄴ음
그래서 long long 했더니 통과함
*/
