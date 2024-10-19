//Interval
#include <iostream>

using namespace std;

int main3() {

    float x;

    cin >> x;
    if (x >= 0 && x <= 100) {

        if (0 <= x && x < 25) {
            cout << "Intervalo [0,25]" << endl;
        }
        else if (25 < x && x <= 50) {
            cout << "Intervalo (25,50]" << endl;
        }
        else if (50 < x && x <= 75) {
            cout << "Intervalo (50,75]" << endl;
        }
        else if (75 < x && x <= 100) {
            cout << "Intervalo (75,100]" << endl;
        }
    }
    else {
        cout << "Fora de intervalo" << endl;
    }

    exit(0);
    return 0;
}