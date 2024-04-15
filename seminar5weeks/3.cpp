#include <iostream>
using namespace std;
class Book {
	char* title;
	int price;
public:
	Book(const char* title, int price) {
		this->price = price;
		int len = strlen(title);
		this->title = new char[len + 1];
		strcpy_s(this->title, len + 1, title);
	}
	Book(Book& b) {
		delete[] this->title;
		this->price = b.price;
		int len = strlen(b.title);
		this->title = new char[len + 1];
		strcpy_s(this->title, len + 1, b.title);
	}
	~Book() { delete[] title; }
	void set(const char* title, int price) { 
		this->price = price;
		int len = strlen(title);
		this->title = new char[len + 1];
		strcpy_s(this->title, len + 1, title);
	}
	void show() { cout << title << ' ' << price << "원" << endl; }

};

int main() {
	Book cpp("명품C++", 10000);
	Book java(cpp);
	java.set("명품자바", 12000);
	cpp.show();
	java.show();
}