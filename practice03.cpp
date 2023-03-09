#include <iostream>
#include <cstring>

using namespace std;
int main() {
	char password[11];	//문자열 선언

	while (true) {
		cout << "종료시 yes를 입력>>";
		cin.getline(password, 100, '\n');	//문자열 입력
		if (strcmp(password, "yes") == 0) {		//yes랑 같으면 반복문 종료
			cout << "프로그램 종료" << endl;
			break;
		}
	}

	return 0;
}