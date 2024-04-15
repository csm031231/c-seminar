#include <iostream>
using namespace std;

class Account {
	string name;
	int id, a;
public:
	Account() { ; }
	Account(string n, int i, int b) {
		name = n, id = i, a = b;
	}
	string getOwner() { return name; }
	void deposit(int m) { a += m; }
	int withdraw(int m) { return a -= m; }
	int inquiry() { return a; }
};

int main() {
	Account a("kitae", 1, 5000);
	a.deposit(50000); //저금
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
	int money = a.withdraw(20000); //출금
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
}