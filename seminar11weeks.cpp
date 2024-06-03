//1��
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
//		cout << "�������� " << getRadius() << "�� " << w << endl;
//	}
//};
//int main(){
//	NamedCircle waffle(3, "waffle");
//	waffle.show();
//}

//2��
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
	cout << "5���� ���� �������� ���� �̸��� �Է��ϼ���." << endl;
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
	cout << "���� ������ ū ���ڴ� " << pizza[index].getName() << "�Դϴ�. " << endl;
}