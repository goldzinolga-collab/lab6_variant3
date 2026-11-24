#include <iostream>
#include <clocale>
using namespace std;

int roomPrice(int nights, int rate = 80, int cleaning = 15) {
    if (nights > 0 && rate >= 0 && cleaning >= 0) {
        int total = nights * rate;
        if (nights < 7) {
            total = total + cleaning;
        }
        return total;
    }
    return -1;
}

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Цена 1 (по умолчанию): " << roomPrice(5) << endl;
    cout << "Цена 2 (свои цены): " << roomPrice(3, 100, 20) << endl;
    cout << "Цена 3 (бесплатная уборка): " << roomPrice(7, 100, 50) << endl;
    return 0;
}
