#include <iostream>
#include <cstring>

using namespace std;
int main() {
	char password[11];	//���ڿ� ����

	while (true) {
		cout << "����� yes�� �Է�>>";
		cin.getline(password, 100, '\n');	//���ڿ� �Է�
		if (strcmp(password, "yes") == 0) {		//yes�� ������ �ݺ��� ����
			cout << "���α׷� ����" << endl;
			break;
		}
	}

	return 0;
}