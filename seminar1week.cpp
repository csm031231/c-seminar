#include <iostream>
using namespace std;

int sum(int n, int m){
	cout << n + m << endl;
	return 0;
}

int main(){
	//1¹ø
	//cout << "Hello Wolrd" <<endl;

	//return 0;

	//2¹ø
	//int n;
	//cin >> n;

	//for (int i = 1; i <= n; i++){
	//	for (int j = 1; j <= i; j++){
	//	cout << "*";
	//	}
	//	cout << "\n";
	//}

	//return 0;

	//3¹ø
	int n,m;
	cin >> n >> m;

	sum(n,m);
	cout << n - m << endl;
	cout << n * m << endl;
	cout << n / m << endl;

	return 0;

}