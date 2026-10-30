#include <iostream>
using namespace std;
int add(int num1, int num2) {
	int num = num1 * num2;
	return num;
}
int main() {
	int a = 50; int b = 60;
	int c  =  add(a, b);
	cout << c;


	system("pause");
	return 0;
}