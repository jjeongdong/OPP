#include <iostream>
#include <cstring>
using namespace std;

int main() {
	double num[5];
	
	cout << "5개의 실수를 띄어쓰기로 구분하여 입력>> ";
	
	for (int i = 0; i < sizeof(num)/sizeof(num[0]); i++) {	// 5개의 실수를 입력
		cin >> num[i];
	}

	double max = num[0];	// 5개의 실수 중 가장 큰 값을 max변수에 할당
	for (int i = 0; i < sizeof(num) / sizeof(num[0]); i++) {
		if (max < num[i]){
			max = num[i];
		}
	}

	cout << "가장 큰 수 : " << max << endl;
	
	return 0;
}