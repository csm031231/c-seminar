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
		cout << "1.�迭�� ���� �ֱ� 2.�迭 ��� 3.������������ ���ĵ� �迭 ��� 4.����" << endl << "�Է� :";
		cin >> t;

		if (t == "1") {
			int s;
			cout << "�迭�� �߰� �� ���ڸ� �Է����ּ���.\n";
			cin >> s;
			m.putNum(s);
		}
		else if (t == "2") {
			cout << "���� �迭�� ����� �����Դϴ�.";
			m.printArr();
		}
		else if (t == "3") {
			cout << "���ĵ� �迭 �Դϴ�.";
			m.sortedPrintArr();
		}
		else if (t == "4") {
			break;
		}
	}
	return 0;
}