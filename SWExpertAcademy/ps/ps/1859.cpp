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
		costs.clear(); //�� �����
	}
	return 0;
}
/*
sol1)
ó���� �ִ� ã�Ƽ� �տ��� �� ���ϴ� ������ �Ϸ��ٰ�
�׷��� ���� �͵��� ��� ó������ �𸣰ھ
�������� ������ ���ؼ� ������� �ִ��̸� �տ��� ���ϴ� ������ �߾���.
�ٵ� �̷��� �ϸ� �ȵ�. �ִ� ������ �ƴ�
3/10

sol2)
ó���� ������ ��� �ִ� ã�Ƽ� �տ��� �� ���ϰ�
�� ���� ���͵� �߿��� �� �ִ� ã�Ƽ� �� ���ϰ� ��
7/10

sol3)
�Ʊ� sol1 �ϴٰ� �´°� ������ �ȵǱ淡 �Է°��� ������ Ȯ����.
���ϱ� N * cost �غ��� 10000000000 (0�� ������.
�̷��� int ���� �Ѥ���
�׷��� long long �ߴ��� �����
*/
