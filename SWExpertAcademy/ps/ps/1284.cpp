#include <iostream>
#include <algorithm>
using namespace std;

int main1284() {
	int T, i = 1;
	int p, q, r, s, w;
	
	cin >> T;
	while (T-- > 0) {
		cin >> p >> q >> r >> s >> w;
		int A, B;
		A = p * w;
		if (w <= r) B = q;
		else B = q + s * (w - r); //초과량에 대해 리터당 s원 추가금
		
		cout << "#" << i << " " << min(A, B) << endl;
		i++;
	}
	return 0;
}