#include <iostream>
#include <cstring>
using namespace std;

int main() {
	double num[5];
	
	cout << "5���� �Ǽ��� ����� �����Ͽ� �Է�>> ";
	
	for (int i = 0; i < sizeof(num)/sizeof(num[0]); i++) {	// 5���� �Ǽ��� �Է�
		cin >> num[i];
	}

	double max = num[0];	// 5���� �Ǽ� �� ���� ū ���� max������ �Ҵ�
	for (int i = 0; i < sizeof(num) / sizeof(num[0]); i++) {
		if (max < num[i]){
			max = num[i];
		}
	}

	cout << "���� ū �� : " << max << endl;
	
	return 0;
}