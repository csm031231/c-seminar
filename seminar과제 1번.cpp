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

	cout << "소환사의 협곡에 오신 것을 환영합니다." << endl;
	cout << "첫 번째 챔피언을 이름 체력 공격력 순으로 생성 해주세요." << '\n' << "ex) 가렌 100 10" << '\n' << "입력 : ";
	cin >> n >> h >> a;

	Champion cmp1(n, h, a); 

	cout << endl << "=====================" << endl;
	cout << "챔피언 이름 : " << cmp1.getname() << '\n' << "챔피언 체력 : " << cmp1.gethp() << '\n' << "챔피언 공격력 : " << cmp1.getad();
	cout << endl << "=====================" << endl;

	cout << "두 번째 챔피언을 이름 체력 공격력 순으로 생성 해주세요." << '\n' << "ex) 가렌 100 10" << '\n' << "입력 : ";
	cin >> n1 >> h1 >> a1;

	Champion cmp2(n1, h1, a1); 

	cout << endl << "=====================" << endl;
	cout << "챔피언 이름 : " << cmp2.getname() << '\n' << "챔피언 체력 : " << cmp2.gethp() << '\n' << "챔피언 공격력 : " << cmp2.getad();
	cout << endl << "=====================" << endl;

	cout << endl << "생성된 챔피언의 정보 입니다." << endl;
	cout << endl << "=====================" << endl;
	cout << "챔피언 이름 : " << cmp1.getname() << '\n' << "챔피언 체력 : " << cmp1.gethp() << '\n' << "챔피언 공격력 : " << cmp1.getad();
	cout << endl << "=====================" << endl;
	cout << "챔피언 이름 : " << cmp2.getname() << '\n' << "챔피언 체력 : " << cmp2.gethp() << '\n' << "챔피언 공격력 : " << cmp2.getad();
	cout << endl << "=====================" << endl;

	cout << endl << "게임을 시작합니다." << endl << "--------------------" << endl;

	while (true) {
		cout << endl << cmp1.getname() << "의 공격 " << cmp2.getname() << "에게 " << cmp1.getad() << "데미지" << endl;
		cmp2.Damage(cmp1.getad());
		cout << endl << "------전투기록------" << endl;
		cout << cmp1.getname() << "의 남은 체력 " << cmp1.gethp() << endl;
		cout << cmp2.getname() << "의 남은 체력 " << cmp2.gethp() << endl;
		cout << "----------------" << endl;

		if (cmp1.gethp() <= 0) {
			cout << "승자는" << cmp2.getname() << "입니다";
			break;
		}
		else if (cmp2.gethp() <= 0) {
			cout << "승자는" << cmp1.getname() << "입니다";
			break;
		}
	}
		return 0;
}
