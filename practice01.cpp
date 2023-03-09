#include <iostream>
using namespace std;

int max(int num1, int num2) { // 두 수중 큰 수를 구하는 함수 구현
	int max_num;
	if (num1 > num2) {
		max_num = num1;
	}
	else {
		max_num = num2;
	}
	return max_num;
}

int main() {
	int num1, num2;

	cout << "2개의 정수를 띄어쓰기로 구분하여 입력>> ";
	
	cin >> num1 >> num2;	// 두 정수 입력

	cout << "큰 수 : " << max(num1, num2) << endl;	// 함수 호출

	return 0;
}