//The Greatest
#include <iostream>
#include <cmath>

using namespace std;

int main2() {

	int a;
	int b;
	int c;

	cin >> a >> b >> c;

	int x = (a + b + abs(a - b)) / 2;
	int y = (x + c + abs(x - c)) / 2;

	cout << y << " eh o maior" << endl;

	system("pause");

	return 0;
}