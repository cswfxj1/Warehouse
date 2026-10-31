#include <iostream>
using namespace std;
int main() {
	int arr[
	] = { 10,20,30,40,50,60 };
	for (int a = 0;a < 6;a++) {
		cout << arr[a];
		cout << endl;
	}
	int n = sizeof(arr) / sizeof(arr[0]) - 1;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n - i;j++) {
			if (arr[j] < arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}

	}
	cout << endl;
	for (int a = 0;a < 6;a++) {
		cout << arr[a];
		cout << endl;
	}
	cout << (int)arr[0] << endl;

	return 0;
}