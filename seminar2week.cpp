#include <iostream>
#include <string>
using namespace std;
/*
//함수
void sumVoid(int a, int b) {
	cout << a + b;
}

int sumInt(int a, int b) {
	
	return a + b;
}

int main() {
	int n, m;

	cin >> n >> m;

	sumVoid(n, m);
	cout << sumInt(n, m);

	return 0;
}
*/

/*
int max(int a, int b) {

	if (a > b) {
		return a;
	}
	else if (a < b) {
		return b;
	}
	else
		return 0;
}

int main() {
	int n, m;

	cin >> n >> m;

	cout << max(n, m);

	return 0;
}
*/
/*
//함수 피라미드
void max(int a) {

	for (int i = 0; i < a; i++) {
		for (int k = a; k >= i; k--) {
			cout << ' ';
		}
		for (int j = 0; j < i*2+1; j++) {
			cout << "*";
		}
		cout << "\n";
	}
}
int main() {
	int n;

	cin >> n ;

	max(n);

	return 0;
}
*/
 
//클래스
class Item {
    public: Item() {
		itemName = "null";
		price = 0;
	}
		  string itemName;
		  int price;

};
int main() {

	Item item;

	cout << item.itemName ;
	cout << item.price;

	cout<<endl<<endl;

	item.itemName = "피바라기";
	item.price = 3400;

	cout << item.itemName;
	cout << item.price;

	return 0;
}