/*
#include <iostream>
#include <string>
using namespace std;

class Item {
	string name;
	int price;
public:
	Item(int price, string name) {
		this->name = name;
		this->price = price;
	}
	int operator + (Item i2) {
		cout << this->name + i2.name + ' ';
		int p = this->price + i2.price;
		return p;
	}
	int operator - (Item i2) {
		cout << this->name + i2.name + ' ';
		int p = this->price - i2.price;
		return p;
	}
	int operator * (Item i2) {
		cout << this->name + i2.name + ' ';
		int p = this->price * i2.price;
		return p;
	}
	void operator % (Item i2) {
		cout << this->name + i2.name + ' ';
		cout << this->price % i2.price;
	}
};
int main() {
	Item i(2000, "a");
	Item i2(3000, "b");

	cout << i + i2 << endl;
	cout << i - i2 << endl;
	cout << i * i2 << endl;
	i% i2;
}
*/

#include <iostream>
using namespace std;

class Statistics {
	int a[100];
	int size = 0;
public:
	Statistics(){ ; }
	bool operator!() {
		if (this->a && size == 0)
			return true;
		else return false;
	}
	Statistics& operator <<(int x) {
		a[size] = x;
		size++;
		return *this;
	}
	void operator ~() {
		for (int i = 0; i < size; i++) {
			cout << this->a[i] << ' ';
		}
	}
	int operator >>(int &avg) {
		int sum = 0;
		for (int i = 0; i < size; i++) {
			sum += this->a[i];
		}
		avg = sum / 7;
		return avg;
	}
};
int main() {
	Statistics stat;
	if (!stat) cout << "현재 통계 데이터가 없습니다." << endl;

	int x[5];
	cout << "5개의 정수를 입력하라 >>";
	for (int i = 0; i < 5; i++) { cin >> x[i]; }
	for (int i = 0; i < 5; i++) { stat << x[i]; }
	stat << 100 << 200;
	~stat;

	int avg;
	stat >> avg;
	cout << "avg = " << avg << endl;
}