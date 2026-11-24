#include <iostream>
#include <clocale>
using namespace std;

int stay(int nights, int price) {
    if (nights > 0 && price >= 0) {
        return nights * price;
    }
    return -1;
}

int stay(int nights, int price, int cleaning) {
    if (nights > 0 && price >= 0 && cleaning >= 0) {
        return (nights * price) + cleaning;
    }
    return -1;
}

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Проживание 1: " << stay(3, 100) << endl;
    cout << "Проживание 2: " << stay(3, 100, 50) << endl;
    cout << "Проживание 3 (ошибка): " << stay(-2, 100, 50) << endl;
    return 0;
}
