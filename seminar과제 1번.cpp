#include <iostream>
#include <string>
using namespace std;

class Champion {
	string name;
	int hp;
	int ad;

public: 
	Champion(string n, int h, int a) { name = n, hp = h, ad = a; }
	string getname() { return name; }
	int gethp() {return hp; }
	int getad() { return ad; }
	int Damage(int damage) {
		return hp -= damage;
	}
};
int main() {
	string n, n1;
	int h, a, h1, a1;

	cout << "��ȯ���� ��� ���� ���� ȯ���մϴ�." << endl;
	cout << "ù ��° è�Ǿ��� �̸� ü�� ���ݷ� ������ ���� ���ּ���." << '\n' << "ex) ���� 100 10" << '\n' << "�Է� : ";
	cin >> n >> h >> a;

	Champion cmp1(n, h, a); 

	cout << endl << "=====================" << endl;
	cout << "è�Ǿ� �̸� : " << cmp1.getname() << '\n' << "è�Ǿ� ü�� : " << cmp1.gethp() << '\n' << "è�Ǿ� ���ݷ� : " << cmp1.getad();
	cout << endl << "=====================" << endl;

	cout << "�� ��° è�Ǿ��� �̸� ü�� ���ݷ� ������ ���� ���ּ���." << '\n' << "ex) ���� 100 10" << '\n' << "�Է� : ";
	cin >> n1 >> h1 >> a1;

	Champion cmp2(n1, h1, a1); 

	cout << endl << "=====================" << endl;
	cout << "è�Ǿ� �̸� : " << cmp2.getname() << '\n' << "è�Ǿ� ü�� : " << cmp2.gethp() << '\n' << "è�Ǿ� ���ݷ� : " << cmp2.getad();
	cout << endl << "=====================" << endl;

	cout << endl << "������ è�Ǿ��� ���� �Դϴ�." << endl;
	cout << endl << "=====================" << endl;
	cout << "è�Ǿ� �̸� : " << cmp1.getname() << '\n' << "è�Ǿ� ü�� : " << cmp1.gethp() << '\n' << "è�Ǿ� ���ݷ� : " << cmp1.getad();
	cout << endl << "=====================" << endl;
	cout << "è�Ǿ� �̸� : " << cmp2.getname() << '\n' << "è�Ǿ� ü�� : " << cmp2.gethp() << '\n' << "è�Ǿ� ���ݷ� : " << cmp2.getad();
	cout << endl << "=====================" << endl;

	cout << endl << "������ �����մϴ�." << endl << "--------------------" << endl;

	while (true) {
		cout << endl << cmp1.getname() << "�� ���� " << cmp2.getname() << "���� " << cmp1.getad() << "������" << endl;
		cmp2.Damage(cmp1.getad());
		cout << endl << "------�������------" << endl;
		cout << cmp1.getname() << "�� ���� ü�� " << cmp1.gethp() << endl;
		cout << cmp2.getname() << "�� ���� ü�� " << cmp2.gethp() << endl;
		cout << "----------------" << endl;

		if (cmp1.gethp() <= 0) {
			cout << "���ڴ�" << cmp2.getname() << "�Դϴ�";
			break;
		}
		else if (cmp2.gethp() <= 0) {
			cout << "���ڴ�" << cmp1.getname() << "�Դϴ�";
			break;
		}
	}
		return 0;
}
