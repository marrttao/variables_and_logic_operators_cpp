#include <iostream>
using namespace std;

int main() {
    int grn, copiyki;
    cout << "Enter the number of grn: ";
    cin >> grn;
    cout << "Enter the number of copiyki: ";
    cin >> copiyki;

    cout << "Corrected amount: " << (grn + copiyki / 100) << " grn " << (copiyki % 100) << " copiyki" << endl;
    return 0;
}
