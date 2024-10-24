//Banknotes
#include<iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    if (n > 0 && n < 1000000) {
        cout << n << endl;

        x = n / 100;
        cout << x << " nota(s) de R$ 100,00" << endl;
       
        n = n % 100;
        x = n / 50;
        cout << x << " nota(s) de R$ 50,00" << endl;
     
        n = n % 50;
        x = n / 20;
        cout << x << " nota(s) de R$ 20,00" << endl;

        n = n % 20;
        x = n / 10;
        cout << x << " nota(s) de R$ 10,00" << endl;
    
        n = n % 10;
        x = n / 5;
        cout << x << " nota(s) de R$ 5,00" << endl;
       
        n = n % 5;
        x = n / 2;
        cout << x << " nota(s) de R$ 2,00" << endl;
       
        n = n % 2;
        cout << n << " nota(s) de R$ 1,00" << endl;
    }
    return 0;
}