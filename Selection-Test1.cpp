#include <iostream>

using namespace std;

int main() {

	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int x = c + d;
	int y = a + b;

	if (b > c && d > a) {
		if (x > y) {
			if (c >= 0 && d >= 0) {
				if (a % 2 == 0) {
					cout << "Valores aceitos" << endl;
				}
			}
		}
	}
	else {
		cout << "Valores nao aceitos" << endl;
	}

	exit(0);

	return 0;
}