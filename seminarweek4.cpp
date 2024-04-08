#include <iostream>
#include <string>
using namespace std;

//class Member {
//public:
//	int id;
//	string name;
//	int grade;
//
//	void printInfo() {
//		cout << "학번 : " << getId() << "\n이름 : " << name << "\n학년 : " << grade << endl;
//	}
//
//	int getId() {
//		return id;
//	}
//	void setId(int id) {
//		this->id = id;
//	}
//};
//
//int main() {
//	int a;
//	cin >> a;
//	Member* m = new Member[a];
//
//	int g, i;
//	string t;
//	for (int y = 0; y < a; y++) {
//		cin >> g >> i >> t;
//		m[y].grade = g;
//		m[y].setId(i);
//		m[y].name = t;
//	}
//	for (int y = 0; y < a; y++) {
//		m[y].printInfo();
//	}
//
//}

int main() {
	string t = "i love C++";
	
	cout << t.substr(2, 4);
}
