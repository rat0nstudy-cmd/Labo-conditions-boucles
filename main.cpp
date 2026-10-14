#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

bool is_prime(int n) {
        for (int divider = 2; divider <= sqrt(n); divider++) {
            if (n % divider == 0)
                return false;
        } return true;
}

bool is_running = true;

int main() {
    do {
        // Start
        int limit = 0;
        do {
            cout << "entrer une valeur [2-1000] : " << endl;
            cin >> limit;
            } while (!(limit >= 2 && limit <= 1000));

        // Prime numbers
        cout << "Voici la liste des nombres premiers" << endl;
        int n_col = 5;
        int col = 1;
        int width = 5;

        for (int n = 2; n <= limit; n++) {
            if (is_prime(n)) {
                cout << setw(width) << n;
                col++;

                if (col > n_col) {
                    cout << endl;
                    col = 1;
                }
            }
        }

        // Restart
        char choice;
        do {
            cout << endl;
            cout << "Voulez vous recommencer [O/N] :" << endl;
            cin >> choice; } while (!(choice == 'O' || choice == 'N'));

        if (choice == 'N') {
            is_running = false;
        }
    } while (is_running);

    cout << "Fin de programme" << endl;
}