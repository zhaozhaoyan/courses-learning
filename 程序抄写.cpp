#include <iostream>
using namespace std;
int main() {
	int n; //n为细菌的数量
	// id记录细菌的编号，rate记录细的繁殖率，第i个细菌对应id[i]和rate[i]
	int id[100];
	double rate[100];

	cin >> n;
	for (int i = 0; i < n; i++) {
		int initial, final;
		cin >> id[i] >> initial >> final;
		rate[i] = (double)final / initial;
	}

//对整个细菌排序
	for (int k = 0; k < n; k++) {
		for (int j = 0; j < n - k - 1; j++) {
			if (rate[j + 1] > rate[j]) {
				int tmpId = id[j];
				id[j] = id[j + 1 ];
				id[j + 1] = tmpId;
				double tmpRate = rate[j];
				rate[j] = rate[j + 1];
				rate[j + 1] = tmpRate;
			}
		}
	}

//记录最大的差
	double maxDiff = 0;
	//和最大差的下标
	int maxDiffIndex = 0;
	for (int m = 0; m < n - 1; m++ ) {
		double diff = rate[m] - rate[m + 1];
		if (maxDiff < diff) {
			maxDiff = diff;
			maxDiffIndex = m;
		}
	}

    //输出繁殖率较大的那组细菌
	cout << maxDiffIndex + 1 << endl;
	for (int a = maxDiffIndex; a >= 0; a--) {
		cout <<	id[a] << endl;
	}

	//输出繁殖率较小的那组细菌
	cout << n - maxDiffIndex - 1 << endl;
	for(int b = n - 1;b >= maxDiffIndex + 1; b--) {
		cout << id[b] << endl;
	}
    return 0;
}
