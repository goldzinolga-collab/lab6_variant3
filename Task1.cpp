#include <iostream>
#include <clocale>
using namespace std;

int roomBill(int nights, int rate, int breakfast) {
    if (nights > 0 && rate >= 0 && (breakfast == 0 || breakfast == 1)) {
        int total = nights * rate;
        if (breakfast == 1) {
            total = total + (nights * 10);
        }
        return total;
    }
    return -1;
}

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Счет 1: " << roomBill(3, 100, 1) << endl;
    cout << "Счет 2: " << roomBill(2, 150, 0) << endl;
    cout << "Счет 3 (ошибка): " << roomBill(-1, 100, 1) << endl;
    return 0;
}
