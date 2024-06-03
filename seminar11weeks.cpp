//1번
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Circle{
//	int radius;
//public:
//	Circle(int radius = 0){ this->radius = radius; }
//	int getRadius(){ return radius; }
//	void setRadius(int radius){ this->radius = radius; }
//	double getArea(){ return 3.14 * radius *radius; }
//};
//class NamedCircle:public Circle {
//	string w;
//public:
//	NamedCircle(int a, string b){
//		setRadius(a);
//		w = b;
//	}
//	void show(){
//		cout << "반지름이 " << getRadius() << "인 " << w << endl;
//	}
//};
//int main(){
//	NamedCircle waffle(3, "waffle");
//	waffle.show();
//}

//2번
#include <iostream>
#include <string>
using namespace std;

class Circle{
	int radius;
public:
	Circle(int radius = 0){ this->radius = radius; }
	int getRadius(){ return radius; }
	void setRadius(int radius){ this->radius = radius; }
	double getArea(){ return 3.14 * radius *radius; }
};
class NamedCircle :public Circle {
		string n;
	public:
		NamedCircle(int a = 0, string b = "") :Circle(a){
			n = b;
		}
		string getName(){ return n; }
		void setName(string Name){ n = Name; }
	};
int main(){
	int a;
	string b;
	NamedCircle pizza[5];
	cout << "5개의 정수 반지름과 원의 이름을 입력하세요." << endl;
	for (int i = 0; i < 5; i++){
		cout << i + 1 << " >> ";
		cin >> a >> b;
		pizza[i].setRadius(a);
		pizza[i].setName(b);
	}
	int max = 0;
	int index;
	for (int i = 0; i < 5; i++){
		if (max < pizza[i].getArea()){
			max = pizza[i].getArea();
			index = i;
		}
	}
	cout << "가장 면적이 큰 피자는 " << pizza[index].getName() << "입니다. " << endl;
}