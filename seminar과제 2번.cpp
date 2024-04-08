#include <iostream>
#include <algorithm>
using namespace std;

class Math {
	int size;
	int arr[100];
	
public:
	Math() { this->size = 0; }
	void putNum(int s){
		arr[size] = s;
		size++;
	}
	void printArr(){
		for (int i = 0; i < size; i++) {
			cout << arr[i] << " ";
		}
		cout << '\n';
	}
	void sortedPrintArr(){
		sort(arr, arr + size);

		for (int i = 0; i < size; i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
	}

};
int main() {
	Math m;

	while (true) {
		string t;
		cout << "1.배열에 숫자 넣기 2.배열 출력 3.오름차순으로 정렬된 배열 출력 4.종료" << endl << "입력 :";
		cin >> t;

		if (t == "1") {
			int s;
			cout << "배열에 추가 할 숫자를 입력해주세요.\n";
			cin >> s;
			m.putNum(s);
		}
		else if (t == "2") {
			cout << "현재 배열에 저장된 숫자입니다.";
			m.printArr();
		}
		else if (t == "3") {
			cout << "정렬된 배열 입니다.";
			m.sortedPrintArr();
		}
		else if (t == "4") {
			break;
		}
	}
	return 0;
}