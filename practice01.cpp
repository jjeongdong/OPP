#include <iostream>
using namespace std;

int max(int num1, int num2) { // �� ���� ū ���� ���ϴ� �Լ� ����
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

	cout << "2���� ������ ����� �����Ͽ� �Է�>> ";
	
	cin >> num1 >> num2;	// �� ���� �Է�

	cout << "ū �� : " << max(num1, num2) << endl;	// �Լ� ȣ��

	return 0;
}