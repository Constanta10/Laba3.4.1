#include <iostream>
#include <clocale>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int a; cout << "������� ���� � 5-�� ������� �������: "; cin >> a;
	if (a < 0) {
		cerr << "������: ������ ������ ���� ������ ����" <<
			endl;
		return 1;
	}
	switch (a) {
	case 0:
	case 1:
	case 2: cout << "���� ��������" << endl; break;
	case 3: cout << "������" << endl; break;
	case 4: cout << "������" << endl; break;
	case 5: cout << "�������" << endl; break;
	default: { cerr << "������: ������������ ������ - 5" << endl;
		return 1;
	}
	}
}